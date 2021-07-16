#include <iostream>
using namespace std;
int main()
{
    long long int n,m;int t;
    scanf("%d",&t);
    while(t--){
    scanf("%lld%lld",&n,&m);
    printf("%lld\n",(((m*m)+m)/2)-(((n*n)+n)/2)+n);
    }
    return 0;
}
