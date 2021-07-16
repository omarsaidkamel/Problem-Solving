#include <iostream>
using namespace std;
int main()
{long long int a,s,d;
cin>>a>>s>>d;
if((a*s)%d!=0)
    {cout<<"double";}
else if(((a*s)/d)<=2147483647&&((a*s)/d)>=-2147483647)
    {cout<<"int";}
else{cout<<"long long";}
    return 0;
}
