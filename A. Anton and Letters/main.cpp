#include <bits/stdc++.h>
using namespace std;
char m;set<int> s;
int main()
{
    while(cin>>m)
     {
        if(m>=97&&m<=122) s.insert(m);
     }
        cout<<s.size();
    return 0;
}
