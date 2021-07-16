#include <iostream>
using namespace std;
int c,d,ma;
int main()
{
    string s;cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='I')c++;
        if(s[i]=='D')c--;
        if(ma<c)ma=c;
    }
    cout<<ma;
    return 0;
}
