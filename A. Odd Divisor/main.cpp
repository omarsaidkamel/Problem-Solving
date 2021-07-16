#include <iostream>
using namespace std;
int main()
{
    int t;long long int n;
    scanf("%d",&t);
    while(t--){
      scanf("%lld",&n);
      while(n%2==0){
        n/=2;
      }
      puts(n==1?"NO":"YES");
    }
    return 0;
}
