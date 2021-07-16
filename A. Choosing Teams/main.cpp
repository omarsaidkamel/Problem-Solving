#include <iostream>
using namespace std;
int main()
{
    int n,k,x,c=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
      scanf("%d",&x);
      if(x+k<=5)c++;
    }
    printf("%d",c/3);
    return 0;
}
