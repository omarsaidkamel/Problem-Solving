#include <iostream>
using namespace std;
int main()
{
    long long y = 0, n , m , c = 0;
    scanf("%lld%lld",&n,&m);
    for(int i = 1 ; i <= n ; i++ ){
      y = ( i + m ) / 5;
      c += ( y -( i / 5 ));
    }
    printf("%lld",c);
    return 0;
}
