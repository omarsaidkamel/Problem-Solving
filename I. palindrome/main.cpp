#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,g;cin>>s;
    int n=s.size()-1;
    for (int i=0;i<s.size();i++){
    if(s[i]!=s[n])
    {
     reverse(s.begin(),s.end());
     cout<<s.erase(0, min(s.find_first_not_of('0'), s.size()-1));cout<<"\nNO";
     return 0;
    }
    n--;
    }
    cout<<s<<"\nYES";
    return 0;
}
