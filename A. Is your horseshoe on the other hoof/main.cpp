/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s; int a,x=4;
    while(x!=0)
    {
        cin>>a;x--;
        s.insert(a);
    }
    cout<<s.size();
}*/
#include<iostream>
using namespace std;
int main()
{
    int a[4],r=0;
    for(int i=0;i<4;i++)
        cin>>a[i];
    if(a[0]==a[1]||a[0]==a[2]||a[0]==a[3])
       r++;
       if(a[1]==a[2]||a[1]==a[3])
       r++;
        if(a[2]==a[3])
       r++;
    cout<<r;
    return 0;
}
