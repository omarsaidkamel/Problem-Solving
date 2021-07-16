#include <iostream>
using namespace std;
int main()
{
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    printf("%.6f",(d*a)+((b-d)*c)+(0.5*(a-c)*(b-d)));
    return 0;
}
