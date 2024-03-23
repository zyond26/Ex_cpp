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
    int n,i,j,d,a[100],b[100],c[100],dem,max=0;
    cin >> n;
    cout << "nhap day a: ";nhap(a,n);
    cout << "nhap day b: ";nhap(b,n);
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
                dem=0;
        if(a[i]==b[j]){
        for(d=i;d<=j;d++){
                dem++;
            }
        if(dem>max){ max=dem;}
        }
    }}
     cout << dem;
    return 0;
}

