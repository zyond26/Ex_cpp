#include <bits/stdc++.h>
using namespace std;

int snt(int t)
{
    if(t<=1) return 0;
    if(t>=4){
        if(t%2==0||t%3==0)return 0;
        else {
                for(int i=5;i<=sqrt(t);i+=6){
                    if(t%i==0||t%(i+2)==0) return 0;
                }
        }
    }
    return 1;
}
int main()
{
    //freopen("TSNT.INP","r",stdin);
   // freopen("TSNT.OUT","w",stdout);
    long i,dem=0,t;

     int n,k; cin >> n >>k;
     bool kt=1;
    for(i=2;i<=n;i++){
      while(n%i==0&&snt(i)==1){
            n=n/i;
           if(snt(i)==1)
             dem++;
           if(dem==k){
                kt=1;
           cout<<"So nguyen to o vi tri thu " << dem << " la " << i <<endl;
           return 0;
           }
           else { kt=0;}
      }
    }
    if(kt==1) cout << "";
    else cout << -1 << endl;
    return 0;
}
