#include <bits/stdc++.h>
using namespace std;

void tangdan(int a[1000],int b[1000],int vt[1000],int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    for(j=n;j>=i+1;j--){
        if(b[i]<b[j]){
            swap(a[i],a[j]);
            swap(b[i],b[j]);
            swap(vt[i],vt[j]);
        }
    }
}
int main()
{
    int a[1000],b[1000],h[1000],n,c[1000],i;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>h[i];
    }

    int vt[1000];
    for(i=1;i<=n;i++){
        vt[i]=i;
    }
    tangdan(a,b,vt,n);
    for(i=1;i<=n;i++){
        cout<<a[i]<<' '<<b[i]<<' '<<h[i]<<' '<<vt[i]<<endl;
    }
    return 0;
}
