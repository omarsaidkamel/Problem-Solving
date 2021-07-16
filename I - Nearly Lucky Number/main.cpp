#include <iostream>
using namespace std;
int main()
{
    string s;int a=0;
    cin>>s;int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='4'||s[i]=='7')a++;
    }
    if(a==4||a==7)printf("YES");
    else printf("NO");
    return 0;
}
