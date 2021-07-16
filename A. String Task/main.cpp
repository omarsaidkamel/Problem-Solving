#include <bits/stdc++.h>
using namespace std;
string s;char d[100000];long long i,l;
int main()
{
    cin>>s;
    int y=s.size();
    for(i=0;i<y;i++)
        {
            if(s[i]<'a')
             s[i]+=32;
             if((s[i]!='u')&&(s[i]!='i')&&(s[i]!='o')&&(s[i]!='e')&&(s[i]!='a')&&(s[i]!='y'))
                {
                  d[l]=s[i];
                  l++;
                }
        }
        for(i=0;i<l;i++)
                cout<<'.'<<d[i];
    return 0;
}
