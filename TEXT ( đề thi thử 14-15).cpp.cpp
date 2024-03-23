
#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int n)
{
        for(int i=1;i<=n;i++){ cin >> a[i];}
}
int main()
{
    int n,t,i,a[1000],max=0,tg=0,dem=0;
    cout<<"nhap n,t :";
    cin>>n>>t;
    nhap(a,n);
    for(i=1;i<=n;i++)
    {  int j=i;
          while(tg<t)
          {
                  tg=tg+a[j];
                  dem++;
                  j++;}
          if(dem>=max) {max=dem;
          }
        }
        cout<<max;
    return 0;
}
