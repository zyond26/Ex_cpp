#include <bits/stdc++.h>
using namespace std;

int tach(int n)
{
    int t=0,s=0;
    while(n!=0){
	   s=s*10+n%10;
	   n=n/10;
     }
     while(s!=0){
	   t=s%10;
	   cout<<t<<" ";
	   s=s/10;
     }
}
int main()
{
    int n,k,i,a[1000];
    cout << "nhap n,k: "; cin >> n ;//>> k;
    /*for(i=1;i<=n;i++){
        cin >> a[i];
    }*/
    cout << tach(n);

}
