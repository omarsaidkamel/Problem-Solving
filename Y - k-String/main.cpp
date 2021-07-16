#include <iostream>
using namespace std;
int m,c,abc[27];
int main()
{
    string s,q="";cin>>m>>s;
    int n=s.length();
    for(int i=0;i<n;i++) abc[s[i]-'a']++;
    for(int i=0;i<26;i++){
       if(abc[i]%m!=0)
        {
         cout<<-1;
         return 0;
        }
       for(int j=1;j<=abc[i]/m;j++) q+=i+'a';

    }
       for(int i=1;i<=m;i++)
        cout<<q;
    return 0;
}
