#include <iostream>
using namespace std;
int main()
{
    long long int n,n1,n2,n3,n4,n5,c=0,x=0;
    scanf("%lld%lld%lld%lld%lld%lld",&n,&n1,&n2,&n3,&n4,&n5);
    if(n1%n==0)c+=n1;
    else x+=n1;
    if(n2%n==0)c+=n2;
    else x+=n2;
    if(n3%n==0)c+=n3;
    else x+=n3;
    if(n4%n==0)c+=n4;
    else x+=n4;
    if(n5%n==0)c+=n5;
    else x+=n5;
    if(x<c)puts("3abas");
    else if(x>c)puts("Sultan");
    else puts("TIE");
    return 0;
}
