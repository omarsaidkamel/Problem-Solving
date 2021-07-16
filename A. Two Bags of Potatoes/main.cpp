#include <iostream>
using namespace std;
int y,n,k,x,l;
int main()
{
   cin>>y>>k>>n;
   l=k-y%k;

   if(l+y>n)cout<<-1;
   else
    {
        for(x=l;x<=n-y;x+=k)
      cout<<x<<" ";
    }
   return 0;
}
