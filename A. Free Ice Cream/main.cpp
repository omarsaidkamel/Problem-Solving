#include <iostream>
using namespace std;
long long x,a,d,n; char c;
int main()
{
    cin>>x>>d;
    for(int i=0;i<x;i++)
        {
            cin>>c>>a;
            if(c=='+')
              d+=a;
              else
              {
                 if(d>=a)
                 d-=a;
                 else
                    n++;
              }
        }
cout<<d<<" "<<n;
    return 0;
}
