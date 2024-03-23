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
   int n,i,a[100],dem=0;
   cin >> n;
   nhap(a,n);
   for(i=1;i<=n;i++){
    if(a[i]==1){
        dem++;
    }
    else if(a[i]==2){
        dem--;
    }
   }
   cout << dem;
    return 0;
}
