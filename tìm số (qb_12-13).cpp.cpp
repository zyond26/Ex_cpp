#include <bits/stdc++.h>
using namespace std;

int snt ( int t)
{
    if(t<=1) return 0;
    if(t>=4)
    {
        if(t%2==0||t%3==0) return 0;
        else
            for(int i=5;i<sqrt(t);i+=6)
        {
            if(t%i==0||t%(i+2)==0)
                return 0;
        }
    }
    return 1;
}
int sodao(int n)
{
    int h=0;
     while(n!=0)
    {
        h=h*10+n%10;
        n=n/10;
    }
    return h;
}
int main()
{
    int m,n,i;
    cin >> m >>n;;
    for(i=m;i<=n;i++){
        if(snt(sodao(i))==1){
            cout << i << endl;
        }
    }
    return 0;
}
