#include <iostream>
using namespace std;
int main()
{int c,v=0;
    cin>>c;
    while(c-365>=0){
        c-=365;v++;
    }
    cout <<v<< " years"<<"\n";v=0;
    while(c-30>=0){
        c-=30;v++;
    }
    cout <<v<< " months"<<"\n"<<c<< " days"<<"\n";
    return 0;
}
