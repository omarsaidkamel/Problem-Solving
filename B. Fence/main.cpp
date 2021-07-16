#include <iostream>
using namespace std;
long long  n,m,a[1000006];
int main()
{
    scanf("%lld%lld",&n,&m);
    for(int i = 1 ; i <= n ; i++){
        scanf("%lld",&a[i]);
        if(i != 1) a[i] += a[i-1];
    }
   // for(int i = 1 ; i <= n ; i++) cout<<a[i]<<" ";
    long long  x = 1000000009,s = 0;
  //  puts("");
    for(int i = 0 ; i + m <= n ; i++) {
       if(x > a[i + m] - a[i]){
         x = min(x,a[i + m] - a[i]);
         s = i + 1;
       }
    }
    printf("%lld",s);
    return 0;
}
