#include <iostream>
using namespace std;
int main()
{
    int a,b,n,c=0;
    scanf("%d",&n);
    while(n--){
      scanf("%d%d",&a,&b);
      if(b-a>=2)c++;
    }
    printf("%d",c);
    return 0;
}
