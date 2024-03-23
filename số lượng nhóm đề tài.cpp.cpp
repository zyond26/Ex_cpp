#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a[100],dem=0,s=0,h;
    cin >> n;
    map<int,int>mp;
    for(i=0;i<n;i++){ cin >> a[i];
         mp[a[i]]++;}
    sort(a+1,a+n+1);
    for(auto it:mp){
     h=it.second;}
    for(i=1;i<=n;i++){
        if(mp[a[i]]==h){
            s=s+h/a[i];
            dem++;
        }
    }
    cout << dem;
    return 0;
}
