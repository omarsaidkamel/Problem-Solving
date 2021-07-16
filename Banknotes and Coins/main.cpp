#include <iostream>
using namespace std;
int main()
{
    int a,f,c=0;char s;
    cin>>a>>s>>f;
    cout<<"NOTAS:\n";
    while(a>=100){
        a-=100;c++;
    }
    cout<<c<<" nota(s) de R$ 100.00\n";c=0;
    while(a>=50){
        a-=50;c++;
    }
    cout<<c<<" nota(s) de R$ 50.00\n";c=0;
    while(a>=20){
        a-=20;c++;
    }
    cout<<c<<" nota(s) de R$ 20.00\n";c=0;
    while(a>=10){
        a-=10;c++;
    }
    cout<<c<<" nota(s) de R$ 10.00\n";c=0;
    while(a>=5){
        a-=5;c++;
    }
    cout<<c<<" nota(s) de R$ 5.00\n";c=0;
     while(a>=2){
        a-=2;c++;
    }
    cout<<c<<" nota(s) de R$ 2.00\nMOEDAS:\n";c=0;
    while(a>=1){
        a-=1;c++;
    }
    cout<<c<<" moeda(s) de R$ 1.00\n";c=0;
    while(f>=50){
        f-=50;c++;
    }
    cout<<c<<" moeda(s) de R$ 0.50\n";c=0;
    while(f>=25){
        f-=25;c++;
    }
    cout<<c<<" moeda(s) de R$ 0.25\n";c=0;
    while(f>=10){
        f-=10;c++;
    }
    cout<<c<<" moeda(s) de R$ 0.10\n";c=0;
    while(f>=5){
        f-=5;c++;
    }
    cout<<c<<" moeda(s) de R$ 0.05\n";c=0;
    while(f>=1){
        f-=1;c++;
    }
    cout<<c<<" moeda(s) de R$ 0.01\n";c=0;


    return 0;
}
