#include <bits/stdc++.h>

using namespace std;

void nhap(int a[],int n)
{
        for(int i=1;i<=n;i++){
                cin >> a[i];
        }
}
int main()
{
    int n,m,i,j,s,max=0,a[1000],b[1000];
    cin >> n >> m;
    nhap(a,n);
    nhap(b,m);
    for(i=1;i<=n;i++){
          s=0;
        for(j=1;j<=m;j++){
                s=s+abs(a[i]-b[j]);
        }
    if(s>max){ max=s;}}
    cout << max;
    return 0;
}

