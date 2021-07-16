#include <iostream>
using namespace std;
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--){
      scanf("%d%d",&a,&b);
      int y=max(a,b),x=min(a,b);
      if(x+x>y)
      printf("%d\n",(x+x)*(x+x));
      else
      printf("%d\n",y*y);
    }
    return 0;
}
