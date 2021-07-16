#include <iostream>
#include<algorithm>
using namespace std;
long long g,v,m,f;
int main()
{cin>>m;
int d[m];
    for(f=0;f<m;f++)
        {cin>>d[f];}
   sort(d,d+m);
    for(f=0;f<m;f++)
        {
        if(g<=d[f])
          {v++;  g+=d[f];}
        }
         cout<<v;
    return 0;
}
