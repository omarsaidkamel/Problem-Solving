#include <iostream>
using namespace std;
char c;int b,a,d;
int main()
{
    cin>>b;
    for(int i=0;i<b;i++)
        {cin>>c;
        if(c=='A')
          a++;
          if(c=='D')
          d++;
        }
    if(a>d)
        cout<<"Anton";
   else if(d>a)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
