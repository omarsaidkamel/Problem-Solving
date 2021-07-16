#include <iostream>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    while(m&&n!=1){
        if(n%10==0)n/=10;
        else n--;
        m--;
    }
    printf("%d",n);
    return 0;
}
