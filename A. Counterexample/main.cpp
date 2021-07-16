#include <iostream>
using namespace std;
int main()
{
    long long x,y;
    scanf("%lld%lld",&x,&y);
    if(x%2 != 0)  x+=1;
    if(y-x < 2)  puts("-1");
    else   printf("%lld %lld %lld",x,x+1,x+2);
    return 0;
}
