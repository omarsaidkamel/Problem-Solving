#include <iostream>
using namespace std;
int main()
{
    int a,b,l;cin>>a>>b;
    for(int i=1;i<=a;i++) if(a%i==0&&b%i==0) l=i;
    cout<<l;
    return 0;
}
