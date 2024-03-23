//Bài Tô màu

//CÁCH 1

#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   int i,t,tong=0;
   char x;
   getline(cin,s);
   int demd=0,demx=0,demv=0;
   for(i=0;i<s.length();i++){
       if(s[i]=='D') demd++;
       if(s[i]=='X') demx++;
       if(s[i]=='V') demv++;
   }
   t=max(demd,max(demx,demv));
   if(t==demd) x='D';
   if(t==demv) x='V';
   if(t==demx) x='X';
   if(x=='D') tong=tong+demx*2+demv;
   if(x=='V') tong=tong+demd*2+demx;
   if(x=='X') tong=tong+demv*2+demd;
   cout<<tong;
   return 0;
}

//CÁCH 2


#include <bits/stdc++.h>
using namespace std;

int kt(string s)
{    int d=0,x=0,v=0,i;
    for(i=0;i<s.length();i++){
    if(s[i]=='D')
        d++;
    if(s[i]=='V')
        v++;
    if(s[i]=='X')
        x++;
        }
        if((2*d+x)<(2*x+v)&&(2*d+x)<(2*v+d))
            return 2*d+x;
        else if((2*x+v)<(2*v+d))
            return 2*x+v;
                else return 2*v+d;
}
int main()
{
   freopen("TOMAU.INP","r",stdin);
   freopen("TOMAU.OUT","w",stdout);
  int i,n;
  string a[100];
  cin >>n;
  for(i=0;i<n;i++)
    cin >>a[i];
  for(i=0;i<n;i++)
    cout<<kt(a[i])<<endl;
    return 0;
}
