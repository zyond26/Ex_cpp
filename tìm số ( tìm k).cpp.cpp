#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,m,max=0,k,t;
    long gt=1;
    cin >> n >> m;
    for(i=1;i<=n;i++){
        gt=gt*i;
    }
    for(i=1;i<=m;i++){
        t=pow(m,k);
    }
    for(i=1;i<=n;i++){
        if(n%i==0){
            if(t==i){
              cout << k;
        }
    }}
    return 0;
}
