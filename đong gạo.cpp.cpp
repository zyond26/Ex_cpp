#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    cin >> n;
    int min = 5000;
    for(i=0;i<=n/3;i++)
    {
        int d= i*3;
        int h=n-d;
        if (h%5==0){
            int g=i+h/5;
            if (g<min){
                min = g;
            }
        }
    }
    if (min==5000){
        cout << -1;
    }
    else{
        cout << min;
    }
    return 0;
}
