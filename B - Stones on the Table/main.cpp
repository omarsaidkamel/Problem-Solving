#include <iostream>
using namespace std;
string s;int f,n;
int main()
{
cin>>n>>s;
for(int i=0;i<n;i++)
    {
      if(s[i]==s[i+1]) f++;
    }
    cout<<f;
    return 0;
}
