#include <iostream>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int x = min(n,m);
    for(int i=1;i<=x;i++){
        if(n%i==0)printf("%d is a divisor of %d\n",i,n);
    }
    return 0;
}
