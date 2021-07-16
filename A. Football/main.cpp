#include <iostream>
using namespace std;
int main()
{
    string s;int x=0,y=0;bool f=0;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='0'){x++;y=0;}
        if(s[i]=='1'){y++;x=0;}
        if(x==7||y==7){f=1;break;}
    }
    puts(f?"YES":"NO");
    return 0;
}
