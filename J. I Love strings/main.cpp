#include <iostream>
using namespace std;
int main()
{
    int n,m;string s,t;cin>>n;
    while(n--){
    cin>>s>>t;
    if(s.length()>t.length())
    {
        m=s.length();
        for(int i=0;i<m;i++)
        {
            if(i>=t.length()) cout<<s[i];
            else cout<<s[i]<<t[i];
        }
    }
    else{
        m=t.length();
        for(int i=0;i<m;i++)
        {
            if(i>=s.length()) cout<<t[i];
            else cout<<s[i]<<t[i];
        }
    }
    cout<<"\n";
    }
    return 0;
}
