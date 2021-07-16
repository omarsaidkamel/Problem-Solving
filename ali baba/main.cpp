#include <iostream>

using namespace std;

int main()
{long long int d,a,b,c;;
cin>>a>>b>>c>>d;
if((a-b+c==d)||((a*b)+c==d)||(a-(b*c)==d)||(a+(b*c)==d)||(a+b-c==d)||((a*b)-c==d))
    {cout<<"YES";}
else{cout<<"NO";}
    return 0;
}
