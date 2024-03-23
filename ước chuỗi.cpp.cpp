#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BAI4.INP","r",stdin);
    freopen("BAI4.OUT","w",stdout);
    int i,j,dem=0;
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(i=0;i<=s1.length();i++){
        for(j=0;j<=s2.length();j++){
            if(isalpha(s1[i])==isalpha(s2[i])){
               dem++;}
        }
    }
    cout << dem <<" "<< endl;
    return 0;
}
