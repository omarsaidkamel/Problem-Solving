#include <iostream>
using namespace std;
int a[4],d,x;string s;
int main()
{
    for(int i=0;i<4;i++)
      {cin>>a[i];}

    cin>>s;
    for(int i=0;i<s.size();i++)
     {
         x=s[i]-'1';
         d+=a[x];
     }
     cout<<d;
    return 0;
}
