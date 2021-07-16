#include <iostream>
using namespace std;
string s;int c;
int main()
{
    while(cin>>s){
        int n=s.length();bool b=false;
        for(int i=0;i<n;i++){
         if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
             b=true;
        }
        if(b==true)c++;
    }
    printf("%d",c);
    return 0;
}
