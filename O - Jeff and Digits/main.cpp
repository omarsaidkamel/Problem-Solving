#include <iostream>
using namespace std;
int n,f,z,a;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a==5)f++;
        else z++;
    }

    if(f/9>0&&z!=0){
      for(int i=0;i<(f/9)*9;i++){
         printf("5");
      }
       for(int i=0;i<z;i++){
         printf("0");
      }
    }
    else if(z!=0) printf("0");
    else printf("-1");
    return 0;
}
