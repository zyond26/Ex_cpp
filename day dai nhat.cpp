#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int n)
{
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
}
int n,k,i,j,a[100],dem,t;
int main()
{
  int max=0;
    cin >> n>>k;
    nhap(a,n);
    for(i=1;i<=n;i++){
        t=a[i];
        dem=1;
        for(j=i+1;j<=n;j++){
                t=t+a[j];
                dem++;
            if(t%dem==0){
                if((t/dem)%k==0&&dem>max){
                    max=dem;
                }
            }
        }
    }
    cout << max;
    return 0;
}


