#include <iostream>
using namespace std;
int main()
{
    int n,x;string s;
    cin>>n>>s;x=n;
    for(int i=0;i<n;i++){
        if(s[i]=='>')x++;
        if(s[i]=='<')x--;
    }
    if(x%20==0)cout<<20;
    else cout<<x%20;
    return 0;
}
