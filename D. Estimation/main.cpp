#include <iostream>
using namespace std;
int main()
{
    string s;int c=0,n;
    cin>>n>>s;
    if((s[0]-'0')%4==0)c++;
    for(int i=1;i<n;i++){
        int x = s[i] - '0';
        int y = s[i-1] - '0';
        int z = (y*10) + x;
        if(z%4==0)c++;
    }
    cout<<c<<"\n";
    return 0;
}
