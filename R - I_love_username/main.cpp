#include <iostream>
using namespace std;
int main()
{
    int n,ma,mi,a,c=0;
    scanf("%d%d",&n,&a);
    ma=a;mi=a;
    for(int i=1;i<n;i++){
      scanf("%d",&a);
      if(a>ma) {ma=a;c++;}
      if(a<mi) {mi=a;c++;}
    }
    printf("%d",c);
        return 0;
}
