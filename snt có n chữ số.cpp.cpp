#include <bits/stdc++.h>
using namespace std;

int snt(int t)
{
   if(t<=1) return 0;
   if(t>=4){
        if(t%2==0||t%3==0) return 0;
        else{
                for(int i=5;i<=sqrt(t);i++){
                        if(t%i==0||t%(i+2)==0) return 0;}}
   }
   return 1;
}
int s_nt(int h)
{
        if(snt(h)==1)
                while(h!=0){
                 h=h/10;
               if(snt(h)==0 && h!=0) return 0;}
               else return 0;
        return 1;
}
int main()
{
   int n,x=1,y=9,i=1,j=1;
   cin >> n;
   while(i<n){
        x=x*10;
        i++;
   }
   while(j<n){
        y=y*10+9;
        j++;
   }
   for(i=x;i<=y;i++){
        if(s_nt(i)==1)
        cout << i << " ";
   }
   return 0;
}
