#include <iostream>
using namespace std;
int main()
{
    int c=0,a,s=100,d=50,f=20,g=10,h=5,q=2,w=1;
    cin>>a;
    cout<< a<<"\n";
    while(a-s>=0){
        a-=s;c++;
    }
    cout<< c<<" nota(s) de R$ 100,00"<<"\n";
    c=0;
    while(a-d>=0){
        a-=d;c++;
    }
    cout<<c<<" nota(s) de R$ 50,00"<<"\n";
    c=0;
    while(a-f>=0){
        a-=f;c++;
    }
    cout<<c<<" nota(s) de R$ 20,00"<<"\n";
    c=0;
    while(a-g>=0){
        a-=g;c++;
    }
    cout<<c<<" nota(s) de R$ 10,00"<<"\n";
    c=0;
    while(a-h>=0){
        a-=h;c++;
    }
    cout<<c<<" nota(s) de R$ 5,00"<<"\n";
    c=0;
    while(a-q>=0){
        a-=q;c++;
    }
    cout<<c<<" nota(s) de R$ 2,00"<<"\n";
    c=0;
    while(a-w>=0){
        a-=w;c++;
    }
    cout<<c<<" nota(s) de R$ 1,00"<<"\n";
    return 0;
}
