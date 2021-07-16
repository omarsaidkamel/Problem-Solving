#include <iostream>
using namespace std;
int main()
{
    double a,b,c,t;
   scanf("%lf%lf%lf",&a,&b,&c);
     if (a < b) {t = a;a = b;b = t;}
    if (b < c) {t = b;b = c;c = t;}
    if (a < b) {t = a;a = b;b = t;}
    if(a>=b+c)puts("NAO FORMA TRIANGULO");
    else if((a*a)==(b*b)+(c*c))puts("TRIANGULO RETANGULO");
    else if((a*a)>(b*b)+(c*c))puts("TRIANGULO OBTUSANGULO");
    else if((a*a)<(b*b)+(c*c))puts("TRIANGULO ACUTANGULO");
    if(a==b&&b==c)puts("TRIANGULO EQUILATERO");
    else if(a==b||b==c)puts("TRIANGULO ISOSCELES");
    return 0;
}
