#include <iostream>
using namespace std;
int k,n,m,a,i,x,h;
int main()
{
    cin>>k>>n>>m;
   for(i;i<k;i++)
 {cin>>a;
     if(a<=n)
            h+=a;
            if(h>m)
                {h=0;x++;}
  }
    cout<<x;
    return 0;
}
