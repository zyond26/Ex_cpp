#include <iostream>

using namespace std;
void nhap(int n,int a[100])
{ cout<<"nhap cac so:";
        for(int i=1;i<=n;i++)
        {
                cin>>a[i];
        }
}
int main()
{
    int n,m,a[100],b[100],dem=0,k=1,c[100];
    cout<<"nhap n:";
    cin>>n;
    nhap(n,a);

    cout<<"nhap m:";
    cin>>m;
    nhap(m,b);

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
    {
            if(a[i]==b[j])
            {
            c[k]=a[i];
            dem++;
            k++;
            }
    }
    cout<<dem<<endl;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
    {
            if(a[i]==b[j])
            {
            cout<<a[i]<<" ";
            }
    }
    cout<<endl;
    for(int i=1;i<=dem;i++)
    for(int j=1;j<=n;j++)
    {
          if(c[i]==a[j])  cout<<j<<" ";
    }
    cout<<endl;
    for(int i=1;i<=dem;i++)
    for(int j=1;j<=n;j++)
    {
          if(c[i]==b[j])  cout<<j<<" ";
    }
    return 0;
}
