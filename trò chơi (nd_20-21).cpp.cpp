#include <bits/stdc++.h>
using namespace std;

int kt(string s)
{
   int i,dem=0;
   for(i=0;i<=s.length();i++){
        if(isdigit(s[i])){
                dem++;
        }
   }
   return dem;
}
 int n,i,j;
 string a[1000],tg;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   //freopen("TROCHOI.INP","r",stdin);
   //freopen("TROCHOI.OUT","w",stdout);
   string a[1000],tg;
   cin >> n;
   for(i=1;i<=n;i++){
        cin >> a[i];
   }
   for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
                if(kt(a[i])>kt(a[j])){
                        tg=a[i];
                        a[i]=a[j];
                        a[j]=tg;
                }
        }
        cout << a[i] << endl;
   }
    return 0;
}
