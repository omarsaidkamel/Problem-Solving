#include <iostream>
using namespace std;
int main()
{
    int n,m,c=0,x=0;
    scanf("%d %d",&n,&m);
    for(int i=n;i<=m;i++){bool f=0;
      for(int j=2;j*j<=i;j++){
         if(i%j==0) f=1;
      }
      if(!f&&i!=1){
        c+=i;x++;
      }
    }
    printf("%d %d",c,x);
    return 0;
}
