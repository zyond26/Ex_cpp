#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool kt=1;
   int n,i,a[100];
   cin >> n;
   for(i=1;i<=n;i++){cin >>a[i];}
   for(i=1;i<=n;i++){
        if(a[i]!=a[i+1]){
            kt=1;}
        else {kt=0;}
   }
   if(kt==1) cout << "YES";
   else cout << "NO";
   return 0;
}
