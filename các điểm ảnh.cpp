#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n,i,a[1000],dem1=0,dem2=0;
    cin >> n;
    map<long,long>mp;
    for(i=1;i<=n;i++)
    {
        cin >> a[i]; mp[a[i]]++;
    }
    for(i=1;i<=n;i++){
        if(mp[a[i]]==1){
            dem1++;
        }
        if(mp[a[i]]!=1&&a[i]==a[i]){
            dem2++;
        }
    }
    cout << dem1 << endl;
    cout << dem2 << endl;
    return 0;
}
