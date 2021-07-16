#include <iostream>
using namespace std;
int main()
{int c,m=0,p=0,f=0;
for(int i=0;i<100;i++)
    {cin>>c;p++;
     if(c>m)
        {m=c;f=p;}
    }
  cout<<m<<"\n"<<f<<"\n";
    return 0;
}
