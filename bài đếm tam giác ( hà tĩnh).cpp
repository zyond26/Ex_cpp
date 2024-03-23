#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int n)
{
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
}
int kt(int a,int b,int c)
{
   if((a+b)>c||(b+c)>a||(a+c)>b){
        return 1;}
    else return 0;

}
int main()
{
    map<int,int>mp;
    int i=1,n,dem=0,a[1000],x,b[1000]; cin >> n;
    nhap(a,n);
    sort(a+1,a+n+1);
    for(i=1;i<=n;i++){
        mp[a[i]]++;
    }
    for(i=1;i<=n;i++){
        if(a[i]!=a[i+1]){
            dem++;
            b[dem]=a[i];
        }
    }
    for(i=1;i<=dem;i++){
        if(mp[b[i]]>=2){
            for(int j=1;j<=dem;j++){
                if(i!=j&&kt(b[i],b[i],b[j])==1){
                    x++;
                }
                if(i==j&&mp[b[i]]>2){
                    x++;
                }
            }
        }
    }
    cout << x;
    return 0;
}
