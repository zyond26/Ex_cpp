#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,dem=0;
    cin >> n;
    for(i=1;i<=n;i++){
    while (n%2==0){
            n=n/2;
            dem++;}
        if(n%2!=0&&n!=1){
            n=3*n+1;
          dem++;
        }
    }
    cout << dem;
    return 0;
}
