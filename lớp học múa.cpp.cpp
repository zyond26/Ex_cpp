#include <bits/stdc++.h>
using namespace std;


int main()
{
    int a,i,n,j,dem,b;cin>>n;
    string s;
    cin >> s;
    dem=0;
    for(i=0;i<s.length();i++){
        a=0;
        b=0;
        if(s[i]=='a') a++;
        if(s[i]=='b') b++;
        for(j=i+1;j<s.length();j++){
            if(s[j]=='a') a++;
            if(s[j]=='b') b++;
            if(a==b) dem++;
        }
    }
    cout<<dem;
    return 0;
}
