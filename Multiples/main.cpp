#include <iostream>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n%m==0||m%n==0) puts("Sao Multiplos");
    else puts("Nao sao Multiplos");
    return 0;
}
