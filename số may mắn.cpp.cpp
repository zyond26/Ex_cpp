#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,i,j,q,a[1000],h[1000];
     map<long,long>mp;
   cout <<"nhap n: ";cin>> n;
   for(i=1;i<=n;i++){
    cin >> a[i];
    mp[a[i]]++;}
    cout << "nhap q: ";cin >> q;
    for(j=1;j<=q;j++){
            cin >> h[j];
        cout << mp[h[j]] << endl;
    }
    return 0;
}
