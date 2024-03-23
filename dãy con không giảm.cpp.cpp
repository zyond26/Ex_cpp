#include <bits/stdc++.h>
using namespace std;

long s[10000],a[10000],n,i,d,Max=0;
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);cout.tie(0);
    // freopen("BAI1.INP","r",stdin);
     //freopen("BAI1.OUT","w",stdout);
     cin>>n;
    for(i=1;i<=n;i++){
    cin>>a[i];
    }
    s[1]=1;
    for(i=2;i<=n;i++){
      if(a[i-1]<=a[i]){
        s[i]=s[i-1]+1;
      if(a[i-1]>a[i])  {s[i]=1;}

      if(s[i]>Max){
            Max=s[i];}
    }
    cout << endl;
   cout<<Max;
    return 0;
}
