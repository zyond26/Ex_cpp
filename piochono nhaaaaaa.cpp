#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool kt=1;
    int i,n,m,a[100],h,dem=0;
    cin >>n >> m;
    for(i=1;i<=n;i++){
        cin >> a[i];
    }
     sort(a+1,a+n+1,greater<int>());
     h=a[1]-1;
     while(kt){
        dem=0;
        for(i=1;i<=n;i++){
            if(a[i]>h)
                dem=dem+(a[i]-h);
            else break;
        }
        if (dem==m) kt=0;
        else h--;
     }
     cout << h;

    return 0;
}
