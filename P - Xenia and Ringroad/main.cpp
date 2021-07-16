#include <iostream>
using namespace std;
int main()
{
    long long int n,m,b,lo=1,c=0;
    scanf("%lld%lld",&n,&m);
    for(int i=0;i<m;i++){
        scanf("%lld",&b);
        if(lo<b)c+=b-lo;
        if(b<lo)c+=(n-lo)+b;
        lo=b;
    }
    printf("%lld",c);
    return 0;
}
