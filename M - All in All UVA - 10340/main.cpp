#include <iostream>
using namespace std;
string s,d;int i;
int main()
{
    while(cin>>s){
    if(s=="EOF")break;
    cin>>d;
    int z=0;
    int y=s.size();int x=d.size();
    if(y>x){cout<<"No\n";continue;}
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            if(s[i]==d[j])
            {z++;i++;}
        }
        if(z<=y)break;
    }
        if(z>=y) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
