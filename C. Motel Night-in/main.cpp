#include <iostream>
using namespace std;
int main()
{
    double n,m;
    scanf("%lf%lf",&n,&m);
    if(((n*2)/3)<= m)puts("Sunny Day");
    else if(n/3 >= m)puts("Rainy Day");
    else puts("Cloudy Day");
    return 0;
}
