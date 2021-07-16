#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int r,s;
    scanf("%lld%lld",&r,&s);
    if(s >= r + r)puts("Square");
    else if(sqrt((s*s)+(s*s)) <= r + r)puts("Circle");
    else puts("Complex");
    return 0;
}
