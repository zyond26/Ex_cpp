#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int t=0;
    while(n!=0){
        t=t+(n%10);
        n=n/10;
    }
    return t;
}
int main()
{
    int n,a[1000],i,j,dem=0;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a[i];
    }
    for(i=1;i<=n;i++){
        dem=0;
        for(j=1000;j<=9999;j++){
                if(sum(j)==a[i])
              //  cout << j << endl;
                       dem++;}
    }
    cout << dem;
   return 0;
}
