#include <bits/stdc++.h>
using namespace std;

string kt(int a,int b,string s)
{
    string c="";
    for(int i=1;i<=b;i++){
        c=s[i]+c;
    }
    return c;
}
int main()
{
    string s,t="";
    getline(cin,s);
    for(int i=0;i<=s.length();i++){
        int d=i;
        if(isalpha(s[i])){
            while(isalpha(s[i])){
                i++;
            }
            i--;
            t=t+kt(d,i,s);
        }
        else t=t+s[i];
    }
    cout << t;
    return 0;
}
