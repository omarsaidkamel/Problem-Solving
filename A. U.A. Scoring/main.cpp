#include <iostream>
using namespace std;
int main()
{long long  x;
cin>>x;
if(x%2==0){cout<<2*(((x*(x/2))+x)-x/2);}
    else{cout<<2*((x*(x/2))+x);}
    return 0;
}
