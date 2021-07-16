#include <iostream>
using namespace std;
int main()
{int x,y[100000],m=0,c=0,h=1,g=0;
cin>>x;
for(int i=0;i<x;i++)
    {cin>>y[i];}
  for(int i=0;i<x;i++)
  {
      if(y[0]!=y[i])
      {y[i]=m;
          break;
      }
  }
  while(y[m]=y[m+1])
    {m++;c++;}

          if(c==0)
        { c++;cout<<c*2;}
         else
          cout<<c*2;

    return 0;
}
