#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x,y,h;
    scanf("%lf%lf%lf",&h,&y,&x);
    if(x+y>h&&x+h>y&&h+y>x) cout<<"Perimetro = "<<fixed<<setprecision(1)<<h+y+x<<"\n";
    else  cout<<"Area = "<<fixed<<setprecision(1)<<(0.5*(h+y))*x<<"\n";
    return 0;
}
