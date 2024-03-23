
#include <iostream>

using namespace std;
void nhap(int a[2000],int n)
{
    for(int i=0;i<n;i++)
    {
              cout<<"nhap yeu cau cua khach hang";
              cin>>a[i];
    }
}

int main()
{
   int m,n,a[2000],b[2000],x,y,z,tg;
  cout<<"nhap so lit xang :";
  cin>>n;
  cout<<"nhap so luong khach hang:";
  cin>>m;
  nhap(a,m);
  for(int i=0;i<n;i++)
  {
          b[i]=a[i];
  }
   for(int i=0;i<m;i++)
          for(int j=m-1;j>i;j--)
          {
                    if(a[i]>a[j])
                    {
                              tg=a[i];
                              a[i]=a[j];
                              a[j]=tg;
                    }
          }

   for(int i=0;i<m;i++)
   {
             x=a[0];
             y=1;
             while(x<n)
             {
                       x=x+a[i];
                       y++;
             }}
   cout<<m-y;
    return 0;
}
