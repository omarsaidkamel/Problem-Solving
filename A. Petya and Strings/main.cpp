#include <iostream>
using namespace std;
string s,v;int n,k,g;
int main()
{
    cin>>s; cin>>v;
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        v[i]=tolower(v[i]);
    }
    if(s==v)
        cout<<0;
    if(s<v)
        cout<<-1;
    if(s>v)
        cout<<1;
    return 0;
}
