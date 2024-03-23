#include <bits/stdc++.h>
using namespace std;

int snt(int t)
{
   if(t<=1) return 0;
   if(t>=4){
        if(t%2==0||t%3==0) return 0;
        else{
                for(int i=5;i<=sqrt(t);i++){
                        if(t%i==0||t%(i+2)==0) return 0;}}
   }
   return 1;
}
int tongchuso(int n)
{
    int t=0;
    while(n>0){
        t=t+(n%10);
        n=n/10;}
    return t;
}
int tongthuaso(int n)
{
    int d=0;
    if(snt(n)==0){
    for(int i=2;i<=n;i++){
        while(n%i==0){
            if(i>10){
            d=d+tongchuso(i);
            n=n/i;}
            else if(i<10){
                d=d+i; n=n/i;
            }
    }}}
    return d;
}

int main()
{
    freopen("SMITH.INP","r",stdin);
    freopen("SMITH.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
   cin.tie(NULL); cout .tie(NULL);
    int  t,i;
    cin >> t;
    for(i=1;i<=t;i++){
        int n; cin >> n;
     if(tongchuso(n)==tongthuaso(n)){
        cout << 1 << endl;
     }
     else cout << 0 << endl;
    }
     return 0;
}
