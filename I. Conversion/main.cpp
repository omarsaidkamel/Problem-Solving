#include <iostream>
using namespace std;
int main()
{
    string s;cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==',')s[i]=' ';
        cout<<s[i];
    }
    return 0;
}
