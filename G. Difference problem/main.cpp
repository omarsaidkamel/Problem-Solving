#include <iostream>
using namespace std;
string s;int o,z;
int main()
{
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='1')o++;
        if(s[i]=='0')z++;
    }
    if(z>o)cout<<z-o;
    else cout<<o-z;
    return 0;
}
