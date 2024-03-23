// BÀI TẬP: đưa ra các số siêu nguyên tố có n chữ số ;

#include <bits/stdc++.h>
using namespace std;

int snt(int t)
{
   if(t<=1) return 0;
   if(t>=4){
        if(t%2==0||t%3==0) return 0;
        for(int i=5;i<=sqrt(t);i+=6){
                        if(t%i==0||t%(i+2)==0) return 0;}
   }
   return 1;
}
int sieu_nt(int h)
{
       while(h!=0){
        if(snt(h)==0) return 0;
       else h=h/10;
       }
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
        if(sieu_nt(i)==1)
         cout << i << " ";
   }
   return 0;
}
