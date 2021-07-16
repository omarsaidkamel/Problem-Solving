#include <iostream>
using namespace std;
int main()
{long long j,h,x,z,s,d,f,g;
cin>>x>>z>>s>>d>>f>>g;
h=(d-x)+f;j=(d-x)+(f-z)+g;
if(h<0)
    {h=h*(-1);}
else if(j<0)
    {j=j*-1;}
if(x>d)
  {cout<<"no";}
 else if(h<z)
    {cout<<"no";}
  else if(j<s)
    {cout<<"no";}
else{cout<<"yes";}
    return 0;
}
