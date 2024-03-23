#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while(t--){
        int n,i,a[1000]; cin >> n;
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        long long left_sum=0,right_sum=0;
        for(i=0;i<n/2;i++){
            left_sum+=a[i];
        }
        for(i=n/2;i<n;i++){
            right_sum+=a[i];
        }
        cout << left_sum*right_sum;
    }

    return 0;
}
