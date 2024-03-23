#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,b[100],i,c[100];
   cin >> n;
   int a[5]={100,50,20,10,5};
   for(i=0;i<=4;i++){
        cin >> b[i];
   }
   for(i=0;i<=4;i++){
   while(b[i]*a[i]>n)
   {
        b[i]--;
   }
   if(b[i]*a[i]<=n){
        n=n-b[i]*a[i];
        }
    c[i]=b[i];
   }
   cout << n << endl;
   for(i=0;i<=4;i++){
                cout <<c[i] << " ";}
    return 0;
}
