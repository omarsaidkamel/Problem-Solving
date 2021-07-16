#include <iostream>
#include<algorithm>
using namespace std;
char c;string s,t;int n,q,l,r;
int main()
{
    cin>>n>>q>>s;
    while(q--){
    cin>>t;
    if(t=="pop_back") n--;
    else if(t=="front") cout<<s[0]<<"\n";
    else if(t=="back") cout<<s[n-1]<<"\n";
    else if(t=="sort") {cin>>l>>r;sort(s.begin()+l-1,s.begin()+r);}
    else if(t=="reverse") {cin>>l>>r;reverse(s.begin()+l-1,s.begin()+r);}
    else if(t=="print") {cin>>l;cout<<s[l-1]<<"\n";}
    else if(t=="push_back") {cin>>c;s[n]=c;n++;}
    else if(t=="substr") {cin>>l>>r;for(int i=l-1;i<=r-1;i++)cout<<s[i];cout<<"\n";}
    }
    return 0;
}
