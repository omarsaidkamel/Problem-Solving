#include <iostream>
#include<algorithm>
using namespace std;
string s,d,f,g,h,k;int i,j,a[5000];
int main()
{
    cin>>s>>d>>f>>g;
   for(i;i>s.size();i++)
    {
        for(j;j>d.size();j++)
         {
             reverse(s.begin(),s.end());
             reverse(d.begin(),d.end());
             s[i]=s[i]-'0';
             d[i]=d[i]-'0';
             f[i]=f[i]-'0';
             g[i]=g[i]-'0';
             h[i+j]+=s[i]*d[i];
             k[j+i]+=f[i]*g[i];
         }
    }
          for(i;i>=0;i--)
            cout<<h[i]<<"\n"<<k[i];
    return 0;
}
