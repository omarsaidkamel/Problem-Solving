#include <iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2!=0) printf("%d.5\n",n/2);
    else printf("%d\n",n/2);
    return 0;
}
