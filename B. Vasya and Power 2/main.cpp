#include <iostream>

using namespace std;
int main()
{   int n;
    cin>>n;
    if(n>0)
    {
        while(n%2 == 0)
        {n/=2;}
        if(n == 1)
        {cout<<"yes";}
    }
    if(n == 0 || n != 1)
    {cout<<"no";}
    return 0;
}
