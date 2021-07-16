#include <iostream>
using namespace std;
string s;
int main()
{
    cin>>s;
    if(s[0]<96)
        cout<<s;
    else
        {s[0]=s[0]-32;
    cout<<s;}
    return 0;
}
