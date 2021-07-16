#include <iostream>
using namespace std;
int main()
{
    int k,n,w;
    scanf("%d%d%d",&k,&n,&w);
    long long t = k*(w*(w+1)/2);
    if(n >= t)puts("0");
    if(n < t)printf("%d", t - n );
    return 0;
}
