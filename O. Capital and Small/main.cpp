#include <iostream>
using namespace std;
int main()
{
   string s;cin>>s;int n=s.size();
   for(int i=0;i<n;i++){
    if(s[i]>='a'&&s[i]<='z')cout<<(char)(s[i]-32);
    else cout<<(char)(s[i]+32);
   }
   return 0;
}
