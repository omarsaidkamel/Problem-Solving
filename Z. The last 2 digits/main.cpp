#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int  a,b,c,d,o,h;
    cin>>a>>b>>c>>d;
    o=(a*b)%100;h=(d*c)%100;
    if((o*h)%100>=0&&(o*h)%100<=9)cout<<"0"<<(h*o)%10;
    else  cout<<(o*h)%100;
    return 0;
}
