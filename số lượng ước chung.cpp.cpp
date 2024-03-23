#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int n)
{
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
}
/*
int UCLN(int a,int b)
{
        while(a!=b)
        {
         if(a>b)
         a=a-b;
         else b=b-a;
}
return a;
}*/
int UC(int a,int b)
{
    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0&&b%i==0){
                 cout << i;
            }
        }
    }
    else if(a<b){
        for(int i=1;i<=a;i++){
            if(a%i==0&&b%i==0){
                cout << i;
            }
        }
    }
    else {
        for(int i=1;i<=b;i++){
            if(a%i==0&&b%i==0){
                cout << i;
            }
        }
    }
}
int main()
{
    //freopen("BAI82.INP","r",stdin);
    //freopen("BAI82.OUT","w",stdout);
    //int t;cin >> t;
    //while(t--){
        int n,i,a[100],t; cin >> n;
        for(i=1;i<=n;i++)
        {
                //cout << "a[" << i << "]=";
                cin >> a[i];
        }
        for(i=1; i<=n;i++)
        {
           t=UC(a[i],a[i+1]);
        }
        //cout << t << " ";
        return 0;
     //}

    return 0;
}
