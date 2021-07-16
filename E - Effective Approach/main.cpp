#include <iostream>
using namespace std;
int main()
{
   long long int n,a[(int)1e5+4],m;
   scanf("%I64d",&n);
   for(long long int i=1;i<=n;i++){
    scanf("%I64d",&m);
    a[m]=i;
   }
   long long int k=0,l=0,q,u;
   scanf("%I64d",&u);
   while(u--){
    scanf("%I64d",&q);
    k+=a[q];l+=n-a[q]+1;
   }
   printf("%I64d %I64d",k,l);
       return 0;
}
