#include <bits/stdc++.h>

using namespace std;

long a[1000000],b[1000000],c[10000],n,i,j;
int main()
{ cin>>n;
for(i=1;i<=n;i++){cin>>a[i];}
for(j=1;j<=n-1;j++){cin>>b[j];}
    c[0]=0;
    c[1]=a[1];
 for(i=2;i<=n;i++){
  c[i]=min(c[i-1]+a[i],c[i-2]+b[i-1]);
 }
    cout <<c[n]  << endl;
    return 0;
}
