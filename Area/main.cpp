#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    cout << "TRIANGULO: "<<fixed<<setprecision(3)<<0.5*a*c<<"\n";
    cout << "CIRCULO: "<<fixed<<setprecision(3)<<3.14159*pow(c,2)<<"\n";
    cout << "TRAPEZIO: "<<fixed<<setprecision(3)<<((a+b)*(0.5*c))<<"\n";
    cout << "QUADRADO: "<<fixed<<setprecision(3)<<b*b<<"\n";
    cout << "RETANGULO: "<<fixed<<setprecision(3)<<a*b<<"\n";
    return 0;
}
