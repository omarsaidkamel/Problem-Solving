#include <iostream>
using namespace std;
int main()
{
    int n,m,c=0;
    scanf("%d%d",&n,&m);
    for(int a=0;a<1000;a++){
        for(int b=0;b<1000;b++){
          if((a*a)+b==n&&(b*b)+a==m)c++;
        }
    }
    printf("%d",c);

    return 0;
}
