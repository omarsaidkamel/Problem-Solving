#include <iostream>
using namespace std;
string s,d;
int main()
{
    cin>>s>>d;
    if(s==d)cout<<-1;
    else cout<<max(s.size(),d.size());
    return 0;
}
