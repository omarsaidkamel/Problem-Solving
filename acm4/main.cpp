#include <iostream>
using namespace std;

int main()
{
   long long a,b,c;int q;
   cin>>q;
   for(int i=0;i<q;i++)
    {
        cin>>a>>b>>c;
        for(long long x=1;x<=100000000000;x++)
            {
                if ((x%c==0)&&((x<a)||(x>b)))
                {
                  cout<<x<<"\n";
                  break;
                }
            }
     }
    return 0;
}
//A. Minimum Integer
