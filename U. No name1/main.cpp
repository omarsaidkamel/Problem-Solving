#include <iostream>
using namespace std;
int e,y,g,p,t,mini;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='E'||s[i]=='e')e++;
        if(s[i]=='g'||s[i]=='G')g++;
        if(s[i]=='y'||s[i]=='Y')y++;
        if(s[i]=='P'||s[i]=='p')p++;
        if(s[i]=='T'||s[i]=='t')t++;
    }
    mini=min(e,g);mini=min(y,mini);mini=min(p,mini);mini=min(t,mini);
    printf("%d",mini);
    return 0;
}
