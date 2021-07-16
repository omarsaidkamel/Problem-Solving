#include <iostream>
using namespace std;
int gcd(int a,int b){
  if(b==0)return a;
  return gcd(b,a%b);
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
      if(n%2==1)n--;
      printf("%d\n",gcd(n,n/2));
    }
    return 0;
}
