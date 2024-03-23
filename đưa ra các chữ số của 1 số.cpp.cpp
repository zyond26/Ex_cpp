#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,dem=0;
    cin >> n;
    if(n==0) dem=1;
   while(n!=0){
    n=n/10;
    dem++;
   }
 cout << dem;
 return 0;}
