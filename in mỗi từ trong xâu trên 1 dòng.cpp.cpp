#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   getline(cin,s);
   for(int i=0;i<=s.length()-1;i++){
    if(s[i]!=' '){
        cout << s[i];}
    else cout << " " << endl;
   }
    return 0;
}
