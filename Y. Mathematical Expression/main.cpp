#include <iostream>
using namespace std;
int main()
{
    int a,b,n;char c,v;
    cin>>a>>c>>b>>v>>n;
    if(c=='+'&&a+b!=n)cout<<a+b;
   else if(c=='-'&&a-b!=n)cout<<a-b;
   else if(c=='*'&&a*b!=n)cout<<a*b;
    else cout<<"Yes";
    return 0;
}
