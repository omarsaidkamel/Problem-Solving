#include <iostream>
using namespace std;
int main()
{
    string s,t;char c;cin>>s>>t;
    cout<<s.size()<<" "<<t.size()<<"\n";
    cout<<s<<t<<"\n";
    c=s[0];s[0]=t[0];t[0]=c;
    cout<<s<<" "<<t<<"\n";
    return 0;
}
