#include <bits/stdc++.h>
using namespace std;

int snt(int t)
{
    if(t<=1) return 0;
    if(t>=4){
        if(t%2==0||t%3==0)return 0;
        for(int i=5;i<=sqrt(t);i+=6){
            if(t%i==0||t%(i+2)==0) return 0;
        }
    }
    return 1;
}
int ktra(int k)
{
    int a,b,dem=0,i;
    for(a=1;a<=9;a++){
        for(b=1;b<=9;b++){
          if (a!=b){
            int n=0;
            for(i=1;i<=k;i++){
                n=n*10+a;
            }
            n=n*10+b;
           for(i=1;i<=k;i++){
                n=n*10+a;
           }
            if(snt(n)==1){
                cout << n << " " ;
                dem++;
            }
        }
    }
  }
  cout << endl;
   return dem;
}
int main()
{
    //freopen("NGUYENTO.INP","r",stdin);
    //freopen("NGUYENTO.OUT","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout .tie(NULL);
    int n; cin >> n;
    cout << ktra(n) ;
}
