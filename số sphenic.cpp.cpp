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
long sphenic(int n)
{
    int d=0;
    for(int i=2;i<=sqrt(n);i++){
        int dem=0;
        while(n%i==0&&snt(i)==1){
            dem++;
            n=n/i;
        }
        if(dem>=2) return 0;
        if(dem==1) d++;
    }
    if(n!=1){ d++;}
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout .tie(NULL);
    freopen("SPHENIC.INP","r",stdin);
    freopen("SPHENIC.OUT","w",stdout);
    int t,i;
    cin >> t;
    for(i=1;i<=t;i++){
            int n; cin >> n;
        cout << sphenic(n) << endl;
    }
    return 0;
}
