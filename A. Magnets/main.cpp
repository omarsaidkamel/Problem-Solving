#include <iostream>
using namespace std;
int n,a=1;string s,m;
int main()
{
   cin>>n>>s;
   for (int i = 0; i < n - 1; ++i)
   {
      cin>>m;
      if (m!=s)
      {
         ++a;
         s=m;
      }
   }
   cout<<a ;
   return 0;
}
