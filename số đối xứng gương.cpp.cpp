// BÀI TẬP: số đối xứng gương ;
#include <bits/stdc++.h>
using namespace std;

int sodao(int n)
{
    int t=0;
    while(n!=0){
        t=t*10+n%10;
        n=n/10;
    }
    return t;
}
void kt(int d)
{
    for(int i=1;i<=5;i++){
       if(d==sodao(d)) {break;}
       else {d=d+sodao(d);}
    }
    if(d==sodao(d))cout << d << endl;
    else cout << "ko";
}
int main()
{

    int n,i,a[100];cin >> n;
   for(i=1;i<=n;i++){cin >> a[i];}
    for(i=1;i<=n;i++){
        if(a[i]>3000) {cout << "khong";}
        else { kt(a[i]);}
    }
    return 0;
}
