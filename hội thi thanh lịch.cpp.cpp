#include <bits/stdc++.h>
using namespace std;

void xuat(double a[],int n)
{
    int i=0;
    for(i=0;i<n;i++){
        cout <<fixed<<setprecision(2);
        cout <<a[i]<<endl;
    }
}
int main()
{
    freopen("THI.INP","r",stdin);
    freopen("THI.OUT","w",stdout);
    int m,n,i,j,k=0;
    double s,tb[1000];
    long long a[1000][100];
    cin>>m>>n;
    for(i=0;i<n;i++)
       for(j=0;j<m;j++){
         cin>>a[i][j];
    }
    for(i=0;i<n;i++){
        s=0;
    for(j=0;j<m;j++){
        s=s+a[i][j];
    }
    tb[k]=s/m;
    k++;
    }
    xuat(tb,n);
    return 0;
}
