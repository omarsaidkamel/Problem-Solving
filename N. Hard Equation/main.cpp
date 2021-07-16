#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    while(t--){long long int c=0;
      scanf("%lld",&n);
      for(long long int x=0;(2*x*x)<=n;x++){
        for(long long int y=0;(3*y*y*y)<=n;y++){
          for(long long int z=0;(4*z*z*z*z)<=n;z++){
            if(n-((2*x*x)+(3*y*y*y)+(4*z*z*z*z))>=0)c++;
            else break;
          }
        }
      }
      printf("%lld\n",c);
    }
    return 0;
}
