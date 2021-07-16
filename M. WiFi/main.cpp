#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int x,y,r,x1,y1,r1;float d;
    scanf("%lld%lld%lld%lld%lld%lld",&x,&y,&r,&x1,&y1,&r1);
    d = sqrt(((x - x1)*(x - x1)) + ((y - y1)*(y - y1)));
    if(d <= r + r1) puts("yes");
    else puts("no");
    return 0;
}
