#include <iostream>
using namespace std;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    cout<<(a/2)*b+((b/2)*(a%2));
    return 0;
}
