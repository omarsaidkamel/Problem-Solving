#include <bits/stdc++.h>
using namespace std;
string s;
int m[(int)1e5+7],i,a,h,n,f;
int main()
{
    cin>>s>>a;
    int y=s.size();
    for(i=1;i<y;i++)
         if(s[i-1]==s[i]) m[i]++;

    for(i=1;i<y;i++) m[i]+=m[i-1];

    for(i=0;i<a;i++)
        {
          cin>>h>>f;
            n = m[f-1]-m[h-1];
             cout<<n<<endl;
        }
     return 0;
}
