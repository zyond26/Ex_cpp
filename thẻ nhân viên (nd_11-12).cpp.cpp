#include <bits/stdc++.h>
using namespace std;

char thenv(int a)
{
    int s=0,i=2;
    while(a!=0){
        s=s+(a%10)*i;
        a=a/10;
        i++;
    }
    s=s%9+65;
    return s;
}
int main()
{
    int a[100],n,s,i,s1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cout <<thenv(a[i])<<endl;
    }
    return 0;
}
