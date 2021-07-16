#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,e;
int main()
{
    cin>>m;
    for(int i=0;i<m;i++)
    {cin>>e;
        if(e%2==0)x++;
        else y++;
    }
    if(y%2==0)
    cout<<x;
    else
    cout<<y;
    return 0;
}
