#include <iostream>
using namespace std;
string s;char c,a='a';int n,d,m;
int main()
{
   cin>>s;
   n=s.size();
    for(int i=0;i<n;i++)
     {
      d=s[i]-a;
       if(d<0){d=d+26;}
       m+=min(d,26-d);
        a=s[i];
     }
   cout<<m;
    return 0;
}
