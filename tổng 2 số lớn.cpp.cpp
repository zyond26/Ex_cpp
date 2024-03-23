#include <bits/stdc++.h>
using namespace std;

string sum(string a,string b)
{
    string c;
    c="";
    int nho=0,tong=0,i,x,y;
    if(a.length()>b.length()){
        b+='0';
    }
    if(a.length()<b.length()){
        a+='0';
    }
    for(i=a.length()-1;i>=0;i--){
        x=a[i]-'0';
        y=b[i]-'0';
        tong=nho+x+y;
        nho=tong/10;
        c=char (tong%10+'0')+c;
    }
    if(nho>0){
        c='1'+c;
    }
    return c;
}
int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    cout << sum(a,b);
    return 0;
}
