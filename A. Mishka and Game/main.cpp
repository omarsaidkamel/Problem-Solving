#include <iostream>
using namespace std;
int main()
{
    int t,a,b,x=0,y=0;
    scanf("%d",&t);
    while(t--){
      scanf("%d%d",&a,&b);
      if(a>b)x++;
      if(a<b) y++;
    }
    if(x>y)puts("Mishka");
    else if(x<y)puts("Chris");
    else puts("Friendship is magic!^^");
    return 0;
}
