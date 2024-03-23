#include <bits/stdc++.h>

using namespace std;

int m,n,a[1000],i,t,j,k;

int main()
{
    int max=0;
   cin>>n;
   for(i=0;i<n;i++)
   cin>>a[i];
   i=0;
   while(i<n)
  {
    t=0;
    j=i;
    while(j<n)
    {
      t=t+a[j];
      j++;
      if(t>max) max=t;
    }
        i++;
  }
    cout<<max;
  return 0;
}
