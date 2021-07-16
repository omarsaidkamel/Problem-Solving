#include <iostream>
using namespace std;
int i,a,b,d[110],e=2,o=1,z;
int main()
{
    cin>>a>>b;
    if(a==0 &&b==0)
    {cout<<"NO";return 0;}
    if(a==b+1||a+1==b||a==b)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

