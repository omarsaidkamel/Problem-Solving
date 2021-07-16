#include <iostream>
using namespace std;
int z,d;
int main()
{
    string s;cin>>s;
    int n = s.length();
    for(int i=0;i<n;i++){
       if(s[i]=='.') {printf("0");}
       else if(s[i]=='-'&&s[i+1]=='.') {printf("1");i++;}
       else if(s[i]=='-'&&s[i+1]=='-') {printf("2");i++;}
    }
    return 0;
}
