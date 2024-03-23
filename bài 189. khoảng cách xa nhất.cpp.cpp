#include<bits/stdc++.h>
using namespace std;

void nhap(int a[],int n)
{
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
}
int khoang_cach(int a[], int n)
{
    map<int, int> mp;
    int amax = 0,i;
    for (i=0; i<n; i++)
    {
        if (mp.find(a[i]) == mp.end())
            mp[a[i]] = i;
        else
            amax= max(amax,i - mp[a[i]]);
    }
    return amax;
}
int main()
{
    int t; cin >> t;
    while(t--){
    int n,a[1000];
    cin >> n;
    nhap(a,n);
    cout << khoang_cach(a,n);
    }
    return 0;
}

