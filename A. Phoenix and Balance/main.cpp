#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
    long long sum1=0,sum2=0;
      scanf("%d",&n);
      if(n==2)puts("2");
      else{
          for(int i=n-1;i>=(n/2);i--)sum1 += (int)pow(2,i);
          for(int i=1;i<(n/2);i++)sum2 += (int)pow(2,i);
          printf("%d\n",(sum2+(int)pow(2,n))-sum1);
      }
    }
    return 0;
}
