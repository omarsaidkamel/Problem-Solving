#include <iostream>
using namespace std;
int main()
{
    string s,t;cin>>s>>t;
    for(int i=0;i<25;i++){
        if(s[i]<t[i])
            {cout<<s<<endl;break;}
        if(s[i]>t[i])
            {cout<<t<<endl;break;}
    }
    return 0;
}
