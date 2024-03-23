#include<iostream>
#include<math.h>
using namespace std;

int main()
{int n,a[100],i,m;
cin>>n;
cin>>m;
for(i=1;i<=n;i++){
cin>>a[i];}
for(i=1;i<=n;i++){
cout<<a[i]+m<<" ";
}   
    return 0;
}