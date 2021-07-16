#include <iostream>
using namespace std;
string s;
int main()
{
    cin>>s;int n=s.length();
    for(int i=0;i<n;i++){
     if(s[i]=='E'&&s[i+1]=='G'&&s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T')
         {printf(" ");i+=4;continue;}
        printf("%c",s[i]);
    }
    return 0;
}
