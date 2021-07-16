#include <iostream>
using namespace std;
int main()
{
    long long int n,m,sum=1;
    scanf("%lld%lld",&n,&m);
    for(long long int i=n;m;i--,m--){
       sum*=i;
    }
    printf("%lld",sum);
    return 0;
}
