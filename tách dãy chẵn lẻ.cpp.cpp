#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,a[1000],i;
    cin >> n;
    for(i=1;i<=n;i++){
        cin >> a[i];
    }  sort(a+1,a+n+1);
    for(i=1;i<=n;i++){
        if(a[i]%2==0){
              sort(a+1,a+n+1);
              cout << a[i] << " " ;
        }
        cout << endl;
       if(a[i]%2!=0){
        sort(a+1,a+n+1);
         cout << a[i] << " " ;
        }
    }
    return 0;
}
