#include <bits/stdc++.h>

using namespace std;
long snt(long n){
    long i;
    if(n<=1) return 0;
      if (n>=4){
        if(n%2==0 || n%3==0) return 0;
          for(i=5;i<=sqrt(n);i+=6){
            if(n%i==0 || n%(i+2)==0)  return 0;
          }
}
return 1;
}
while(int i= a; i<a;i++){
  longb= include
}
long ktra(long a,long b){
  long d=a+b,i=1,p;
if(d%2==0){
  
  //for(i=4;i<=d;i+=2){
    while(p>=4){
    p=d+i;
    if( snt(p)==1){
    return i;
    }
  else{ i+=2;}
}}
else{
 while(p>=3){
   p=d+i;
   if(snt(p)==1){
    return i;
   }
  else { i++; }
  }
}
}
int main()
{ long a[1000],b[1000],i,n;
    cin>>n;
  for(i=1;i<=n;i++){
    cin>>a[i]>>b[i];}
    for(i=1;i<=n;i++){
    cout <<ktra(a[i],b[i]) << endl;
    }
    return 0;
}
