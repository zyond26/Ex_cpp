#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
    for(int i=1;i<=n;i++){
        cin >> a[i];}
}
int ktra(int n)
{
   int d=0;
   while(n>=5){
    n=n/5;
    d=d+n;
   }
    return d;
}
int main()
{
   // freopen("B1.INP","r",stdin);
   // freopen("B1.OUT","w",stdout);
    int n,i,a[1000];
    cin >> n;
    nhap(a,n);
    for(i=1;i<=n;i++){
    cout << ktra(a[i]) << endl;
    }
    return 0;
}
