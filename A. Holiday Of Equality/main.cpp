#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,x,h,sum=0,mx;
    scanf("%d%d",&n,&x);
    for(int i=1;i<n;i++){
      scanf("%d",&h);
      if(x>h){
        sum+=(x-h);
      }
      else {
        sum+=(h-x)*i;
        x=h;
      }
    }
    printf("%d",sum);
    return 0;
}
