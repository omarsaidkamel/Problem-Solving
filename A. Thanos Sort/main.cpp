#include <iostream>
using namespace std;
int main()
{int i[100],c=1,o,d=1,m=0;
cin>>o;
for(int x=0;x<o;x++)
    {cin>>i[x];}
for(int x=0;x<o;x++)
    {if(i[x]<=i[x+1])
      {c++;m++;}
    else{
        for(int x=m;x<o;x++)
    {if(i[x]<=i[x+1])
      {d++;m++;}
else{
    if(c<d){d=0;
    for(int x=m;x<o;x++)
    {if(i[x]<=i[x+1])
      {d++;m++;}
    else{break;}
    }

    }}}
            }
    }
      if(o<c||o<d){cout<<o;}
  else{if(c>d){cout<<d;}
  else{cout<<c;}
   } return 0;
}
