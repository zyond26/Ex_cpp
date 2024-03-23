#include <bits/stdc++.h>
using namespace std;
void nhap(int a[],int n)
{
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
}
int dem_uoc(int n)
{
    int dem=0,i;
    for(i=1;i<=n;i++){
        if(n%i==0){
            dem++;
        }
    }
    return dem;
}
int main()
{
    int n,i,a[1000];
    cin >> n;
    nhap(a,n);
    for(i=1;i<=n;i++){
        cout << dem_uoc(a[i]) << endl;
    }
    return 0;
}
