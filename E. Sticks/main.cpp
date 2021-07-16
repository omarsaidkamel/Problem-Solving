#include <iostream>
using namespace std;
int main()
{
    long long int a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a+b<=c||a+c<=b||c+b<=a)puts("NO");
    else puts("YES");
    return 0;
}
