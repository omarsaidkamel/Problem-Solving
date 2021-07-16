#include <iostream>
using namespace std;
int main()
{
    int a,b;string s;bool d=true,c=true;
    cin>>a>>b>>s;
    if(s[a]!='-'){cout<<"No\n";return 0;}
    for(int i=0;i<s.size();i++){
      if(i==a) continue;
     if(!(s[i]>='0'&&s[i]<='9')) d=false;
    }
    if(d==false)cout<<"No\n";
    else cout<<"Yes\n";
    return 0;
}
