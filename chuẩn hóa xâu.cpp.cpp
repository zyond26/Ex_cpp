#include <bits/stdc++.h>

using namespace std;

int  main()
{
    int i,j,a[100],size=0;
    string  s;
    getline(cin,s);
    while(s[0]==' '){
        s.erase(s.begin()+0);
    }
    while(s.length()-1==' '){
        s.erase(s.begin()+s.length()-1);
    }
    for(i=0;i<s.length();i++){
        if(s[i]==' '&&s[i+1]==' '){
            s.erase(s.begin()+(i+1));
            i--;
        }
    }
    cout << s;
    return 0;
}
