#include <bits/stdc++.h>
using namespace std;

void nhap(int a[],int n)
{
        cout<<"nhap ma so bi:";
        for(int i=1;i<=n;i++)
                cin>>a[i];
}

int main()
{
    int n,q,a,b,d[1000],dor=0,xanh=0,vang=0;
    cout<<"nhap n:";
    cin>>n;
    cout<<"nhap q:";
    cin>>q;
    nhap(d,n);
    for(int i=1;i<=q;i++)
    {
            cout<<"nhap a,b:";
            cin>>a>>b;
            for(int j=a;j<=b;j++)
                {if(d[j]==1) dor++;
                 if(d[j]==2) xanh++;
                 if(d[j]==3) vang++;}
    cout<<"bi do la:"<<dor<<endl;
    cout<<"bi xanh la:"<<xanh<<endl;
    cout<<"bi vang la:"<<vang<<endl;
    dor=dor-dor;
    xanh=xanh-xanh;
    vang=vang-vang;

    }

    return 0;
}
