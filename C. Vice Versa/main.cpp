#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;string s,d;
    cin>>n>>s;d=s;
    reverse(s.begin(),s.end());
    cout<<s<<"\n";
    printf(s==d?"YES":"NO");
    return 0;
}
