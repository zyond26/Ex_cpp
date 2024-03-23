#include <bits/stdc++.h>
 using namespace std;

bool nt(int a)
{
    int i;
    if(a<=1) return 0;
    if(a>=4){
        if(a%2==0||a%3==0) return 0;
        else
        for(i=5;i<=sqrt(a);i+=6){
            if(a%i==0||a%(i+2)==0) return 0;
        }
    }
    return 1;
}
string cx(int a)
{
    string s;
    stringstream ss;
    ss<<a;
    ss>>s;
    return s;
}
int cs(string s)
{
    int a;
    stringstream ss;
    ss<<s;
    ss>>a;
    return a;
}
void ntghep(int a)
{
    int dem=0,i=2,k=0;
    string s="";
    bool kt;
    while(dem<a){
            if(nt(i)==1){
            s=s+cx(i);
            k++;
            }
            if(k==2&&nt(cs(s))==1){
                cout <<s<<endl;
                dem++;
                s="";
                k=0;
            }
            if(k==2){
                s="";
                k=0;
            }
            i++;
        }
}
int main()
{
    int n;
    cin >>n;
    ntghep(n);
    return 0;
}
