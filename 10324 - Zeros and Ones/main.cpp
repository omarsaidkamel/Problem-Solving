#include <bits/stdc++.h>
using namespace std;
string s; int m,n,b,v,l;
int main()
{
    while(cin>>s>>m)
    {
     cout<<"Case "<<++l<<":"<<endl;
    for(int i=0;i<m;i++)
        {
            cin>>n>>b;
            if(max(n,b)==min(n,b))
               cout<<"Yes"<<endl;
           else
               cout<<"No"<<endl;
        }
    }
    return 0;
}
