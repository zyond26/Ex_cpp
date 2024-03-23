#include <iostream>
#include <vector>
#include <atomic>
#include <chrono>
#include <sstream>

using namespace std;

class Guard {
private:
    string name;
    int turn;
    int maxSecondEachTurnCanRun;
    atomic_flag& myPhoneFlag;
    atomic_flag& peerPhoneFlag;
    vector<string>& tasks;

public:
    Guard(const string& name, atomic_flag& myPhoneFlag, atomic_flag& peerPhoneFlag, vector<string>& tasks) :
            name(name), turn(0), maxSecondEachTurnCanRun(3), myPhoneFlag(myPhoneFlag), peerPhoneFlag(peerPhoneFlag), tasks(tasks) {}

    void work(int parallel) {
        while (true) {
            while (myPhoneFlag.test_and_set(memory_order_acquire)); // Acquire the lock
            doMaxNTasks(parallel);
            myPhoneFlag.clear(memory_order_release); // Release the lock
            peerPhoneFlag.notify_one(); // Notify the other guard
        }
    }

    void doMaxNTasks(int n) {
        turn++;
        auto start = chrono::steady_clock::now();
        for (int i = 0; i < n; ++i) {
            auto end = chrono::steady_clock::now();
            auto diff = end - start;
            if (chrono::duration_cast<chrono::seconds>(diff).count() >= maxSecondEachTurnCanRun) {
                return;
            }
            if (!tasks.empty()) {
                cout << name << "'s " << turn << "th turn: task " << i + 1 << "th: " << tasks.back() << endl;
                tasks.pop_back();
            }
        }
    }
};

void continuouslyGenerateTasks(const string& id, vector<string>& tasks) {
    while (true) {
        stringstream ss;
        ss << id << " generated task " << chrono::system_clock::now().time_since_epoch().count();
        string task = ss.str();
        tasks.push_back(task);
        int waitTime = 1 + rand() % 3;
        waitTime::sleep_for(chrono::seconds(waitTime));
    }
}

int main() {
    cout << "Enter max number of people each guard can allow: ";
    int parallel;
    cin >> parallel;

    srand(static_cast<unsigned int>(time(nullptr)));

    atomic_flag leftPhoneFlag = ATOMIC_FLAG_INIT;
    atomic_flag rightPhoneFlag = ATOMIC_FLAG_INIT;
    vector<string> leftTasks(20), rightTasks(20);

    for (int i = 0; i < 20; ++i) {
        leftTasks[i] = "LEFT initial task " + to_string(i);
        rightTasks[i] = "RIGHT initial task " + to_string(i);
    }

    leftPhoneFlag.test_and_set(memory_order_acquire); // Initialize lock

    Guard leftGuard("right", leftPhoneFlag, rightPhoneFlag, leftTasks);
    Guard rightGuard("left", rightPhoneFlag, leftPhoneFlag, rightTasks);

    // Replace threads with a simple loop
    while (true) {
        leftGuard.work(parallel);
        rightGuard.work(parallel);
        continuouslyGenerateTasks("LEFT", leftTasks);
        continuouslyGenerateTasks("RIGHT", rightTasks);
    }

    return 0;
}
