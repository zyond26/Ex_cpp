#include <bits/stdc++.h>
using namespace std;

void tach(int n)
{
    int t,s=0;
while(n!=0)
{
	s=s*10+n%10;
	n=n/10;
}
while(s!=0)
{
	t=s%10;
	cout<<t<<" ";
	s=s/10;
}
}
void nhap(int a[],int n)
{
    for(int i=1;i<=n ;i++){
        cin >> a[i];
    }
}
int main()
{
    int d=0,n,i,a[100];
    cin >> n ;
   // nhap(a,n);
    tach(n);

    return 0;
}
