#include <iostream>
using namespace std;
int a[30];
int main()
{
    string s;cin>>s;int n=s.size();
    for(int i=0;i<n;i++) a[s[i]-'a']++;
    for(int i=0;i<30;i++){
     if(a[i]!=0) cout<<(char)('a'+i)<<" : "<<a[i]<<"\n";
    }
    return 0;
}
