#include <iostream>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(m>n)printf("%d",n);
    else {
        for(int i=1;i<=n;i++){
          if(i%m==0)n++;
        }
     printf("%d",n);
    }
    return 0;
}
