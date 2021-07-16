#include <iostream>
#include <cmath>
using namespace std;
int main()
{long long x,y;
cin>>x;
for(long long i=0;i<=x;i++)
{y=pow(2,i);
    if(x==y)
        {cout<<"YES";break;}
}
  if(x!=y){cout<<"NO";}    return 0;
}
