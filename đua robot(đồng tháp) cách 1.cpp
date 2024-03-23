#include <bits/stdc++.h>
using namespace std;
struct robot
{
        int tks,rb;
};
robot mang[100000];
int n, m;
void nhap()
{
        for(int i=1;i<=n;i++)
                cin>>mang[i].rb;
        for(int i=1;i<=m;i++)
                cin>>mang[i].tks;
}
int main()
{int max=0,s,x;
 cin>>n>>m;
    nhap();
    for(int i=1;i<=n;i++)
    {
            s=0;
        for(int j=1;j<=m;j++)
    {


        s=s+abs(mang[i].rb-mang[j].tks) ;
    }

    if(s>max) max=s;
    }
    cout<<max;
    return 0;
}


