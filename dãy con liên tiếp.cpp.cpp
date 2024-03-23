#include <bits/stdc++.h>

using namespace std;

int tong(int h[],int a,int b)
{
        int t=0;
        for(int i=a;i<=b;i++){
                t=t+h[i];
        }
        return t;
}
int main()
{
    int n,m,a[100],k,i,j,t,dem=0;
    cin >>n >> m;
    for(i=1;i<=n;i++){
        cin >> a[i];
    }
    for(i=1;i<=n;i++){
        t=0;
        for(int j=i;j<=n;j++){
                t=tong(a,i,j);
                if(t==m){
          for(k=i;k<=j;k++){
             cout << a[k] << " ";
             dem++;
        }
            cout << endl;
        }
        if(t>m) break;
       }
    }
    if(dem==0){
        cout << 0;
        }
    return 0;
}
