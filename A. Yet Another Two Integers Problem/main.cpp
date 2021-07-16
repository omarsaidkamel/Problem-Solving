#include <iostream>
using namespace std;
int main()
{
    int t,a,b,z;
    scanf("%d",&t);
    while(t--){int c=0,cx=1;
      scanf("%d%d",&a,&b);
      z = max(a,b) - min(a,b);
      if(z%10!=0)c++;
      z/=10;
      while(z){
        if(z%10!=0)c+=cx*(z%10);
        z/=10;
        cx*=10;
      }
      printf("%d\n",c);
    }
    return 0;
}
