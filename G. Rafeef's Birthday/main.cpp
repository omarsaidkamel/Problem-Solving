#include <iostream>
using namespace std;
int main()
{int g;
cin>>g;
if(((g % 4 == 0) && (g % 100 != 0)) || (g % 400 == 0))
    {cout<<"YES";}
else{cout<<"NO";}
    return 0;
}
