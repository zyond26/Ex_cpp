#include <bits/stdc++.h>
using namespace std;

int fibo( int n)
{
   int a=0,a1=1,a2=1,i=3;
   if(n==1||n==2) return 1;
   if(n<0) return -34;
   while(i<=n)
   {
       a=a1+a2;
       a1=a2;
       a2=a;
       i++;
   }
   return a;
}

int main()
{
    int i,j,a[1000],dem=0,b[1000];
    long  n; cin >> n ;
    bool kt=1;
    //for(i=1;i<=n;i++){ cin >> a[i];}
    for(i=1;i<=n;i++){
        j=1;
        b[j]=fibo(i);
        //cout << b[j] << " ";
        }
    for(i=1;i<=n;i++){
          if(n==b[j]){
                kt=1;
            cout << i << endl;
           // return 0;
          }
          else kt=0;
    }
    if(kt==1) cout << "";
    else cout << -1;
        return 0;
}
