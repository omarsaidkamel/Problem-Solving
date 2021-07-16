#include <iostream>
using namespace std;
int i,t,r,v,c;
int main()
{
    cin>>i>>t;
    for(r;r<i;r++)
      {
          cin>>v;
        if(v<=t)
            c++;
        else
    c+=2;
      }
      cout<<c;
    return 0;
}
