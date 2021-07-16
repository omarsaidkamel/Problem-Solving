#include <bits/stdc++.h>
using namespace std;
int main()
{string s;
    while(cin>>s){
        int x=0;
        if(s[s.size()-1]=='.')x++;
        reverse(s.begin(),s.end());
        if(x!=0) cout<<s<<"\n";
        else cout<<s<<" ";
    }
    return 0;
}
