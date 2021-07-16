#include <iostream>
using namespace std;
int main()
{
    int n,m;
    scanf("%d",&n);m=8+(n%2);
    printf("%d %d",m,n-m);
    return 0;
}
