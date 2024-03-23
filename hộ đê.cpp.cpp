#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a[100],s=0;cin >> n;
    for(i=1;i<=n;i++){ cin >> a[i];}
    int min=a[1];
    for(i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            if(a[i]>a[j]){
                s=a[i]-a[j];
            }
            if(s<min){
                min=s;
            }
        }
    }
    cout << s;
    return 0;
}
