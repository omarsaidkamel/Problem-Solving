#include <iostream>
#include<cmath>
using namespace std;
void divisors(long long  n){
   bool b = true;
   for(long long i = 2 ; i * i <= n ; i++ ){
     if( n % i == 0){b = false; break;}
   }
   if(b)puts("YES");
   else puts("NO");
}
int main()
{
    int n ;long long a ;scanf("%d",&n);
    for(int i = 0 ; i < n ; i++ ){
        scanf("%lld",&a);
        long long x =sqrt(a);
        if(x * x != a || a == 1) puts("NO");
        else divisors(x);
    }
    return 0;
}
