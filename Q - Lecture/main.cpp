#include <iostream>
using namespace std;
int a,b,i,j;string k[5000],s[5000],d[5000];
int main()
{
    cin>>a>>b;
    for(i;i<b;i++)
           cin>>s[i]>>d[i];
   for(i=0;i<a;i++)
          cin>>k[i];
   for(i=0;i<a;i++)
          {
        for(j=0;j<b;j++){
           if(k[i]==s[j]||k[i]==d[j])
            {
            if(s[j].size()<d[j].size())
                k[i]=s[j];
            if(s[j].size()>d[j].size())
                k[i]=d[j];
            }
        }
    }
        for(i=0;i<a;i++)
           cout<<k[i]<<" ";
    return 0;
}
