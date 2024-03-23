// bài tập: mua hàng năm 2009-2010;

#include <bits/stdc++.h>

using namespace std;

void nhap(int n,int a[100])
{
        cout<<"nhap thoi gian:";
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
        }
}
int main()
{
    int a[100],n,k,x;
    cout<<"nhap so nguoi mua hang:";
    cin>>n;
    cout<<"nhap nguoi thu k:";
    cin>>k;
    nhap(n,a);
    for(int i=0;i<k-1;i++)
    {
            x=x+a[i];
    }
    cout<<x;

    return 0;
}
