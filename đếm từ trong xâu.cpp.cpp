#include <bits/stdc++.h>
using namespace std;

CÁCH 1

int main()
{
    string s;
    getline(cin,s);
    int dem=0;
    stringstream ss(s);
    string word;
    while(ss >> word){
        dem++;
    }
    cout << dem;
    return 0;
}

CÁCH 2

int main()
{
    string s;
    getline(cin,s);
    int dem=0;
    s=" "+s;
    for(int i=0;i<s.length();i++){
        if(s[i-1]==' '&&s[i]!=' '){
            dem++;
        }
    }
    cout << dem;
    return 0;
}
