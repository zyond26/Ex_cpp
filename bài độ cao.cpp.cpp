#include <bits/stdc++.h>

using namespace std;

int sum(int n)
{
    int s=0;
    while(n!=0){
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int snt(int t)
{
    if(t<=1) return 0;
    if(t>=4) {
        if(t%2==0||t%3==0) return 0;
        else{
            for(int i=5;i<=sqrt(t);i++){
                if(t%i==0||t%(i+2)==0) return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int n,h,i,dem=0;
    cin >> n >> h;
    for(i=1;i<=n;i++){
        if(snt(i)==1&&snt(i)<n&&sum(i)==h){
            cout << i << endl;
            dem++;
        }
    }
    cout << dem;

    return 0;
}
