#include <bits/stdc++.h>
using namespace std;
string s;int o,j,i;
int main()
{ofstream out;
 while(cin>>o&&o!=0&&cin>>s){
      int m=0,mi=2000001,z=0;
    for(i=0;i<=o;i++){
       if(s[i]=='R')
        {
          for(j=i;j<=o;j++)
             {
                if(s[j]=='R') i=j;
                if(s[j]=='Z') z++;
                if(s[j]=='D'){
                       if(j-i<mi&&j-i!=0)
                        mi=j-i;i=j;break;
                }
             }
         }
         if(s[i]=='D')
         {
           for(j=i;j<=o;j++)
             {
                  if(s[j]=='D') i=j;
                  if(s[j]=='Z') z++;
                  if(s[j]=='R')
                    {
                      if(j-i<mi&&j-i!=0)
                        mi=j-i;i=j;break;
                    }
             }
         }
     if(s[i]=='Z')z++;
     }
    if(mi>200000||z!=0) cout<<0<<"\n";
    else   cout<<mi<<"\n";
    }
    return 0;
}
