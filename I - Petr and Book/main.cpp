#include <iostream>
using namespace std;
int main()
{
    int n,a[9];
    scanf("%d",&n);
    for(int i=1;i<=7;i++)scanf("%d",&a[i]);
    while(n>=0){
      for(int i=1;i<=7;i++){
         n-=a[i];
        if(n<=0){
            printf("%d",i);
            return 0;
        }
      }
    }
    return 0;
}
