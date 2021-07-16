#include <iostream>
using namespace std;
int a,b,c,k,d,h,f,m,n;
int main()
{
    cin>>a>>b>>c;
k=a*b*c;f=a+(b*c);n=(a*b)+c;
h=a*(b+c);d=(a+b)*c;m=(a+b)+c;
if((k>=f)&&(k>=h)&&(k>=d)&&(k>=n)&&(k>=m))
    {cout<<k; return 0;}
if((f>=k)&&(f>=h)&&(f>=d)&&(f>=n)&&(f>=m))
   {cout<<f; return 0;}
if((h>=k)&&(h>=f)&&(h>=d)&&(h>=n)&&(h>=m))
    {cout<<h; return 0;}
if((d>=f)&&(d>=h)&&(d>=k)&&(d>=n)&&(d>=m))
    {cout<<d; return 0;}
if((n>=f)&&(n>=h)&&(n>=k)&&(n>=d)&&(n>=m))
    {cout<<n; return 0;}
if((m>=f)&&(m>=h)&&(m>=k)&&(m>=n)&&(m>=d))
    {cout<<m; return 0;}
}
