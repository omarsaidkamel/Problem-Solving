#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s;getline(cin,s,'\\');cout<<s;
    return 0;
}
/* string s;cin>>s;
   int i=s.size();
   for(int j=0;j<i;j++) {
        if(s[j]!="\\")  cout<<s[j];
        else break;
    }
    char c[(int)1e6+7];int i=0;
    while(cin>>c[i]){
        if(c[i]==' ')c[i]=1;
        i++;
    }
    for(int j=0;j<i;j++) {
        if(c[j]=='\\') break;
        if(c[j]==1)cout<<' ';
        else cout<<c[j];
    }
*/
