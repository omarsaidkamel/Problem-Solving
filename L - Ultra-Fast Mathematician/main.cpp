#include <iostream>
using namespace std;
int main()
{
    string s,g;
    cin>>s>>g;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='1'&&g[i]=='0') printf("1");
        else if(s[i]=='0'&&g[i]=='1') printf("1");
        else printf("0");
    }
    return 0;
}
