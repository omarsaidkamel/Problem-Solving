#include <iostream>
using namespace std;
string s;int n,i,m,x,j=1;
int main()
{
    cin>>s;
    n=s.size();
    if(s[0]>96)
     {x++;}
    for(i=1;i<n;i++)
        {
            if(s[i]>96)
                {m++;}
                else if(s[0]<96&&s[i]<96)
                    {j++;}
        }
        if(m+x==1&&x!=0)
            {
                s[0]-=32;
             for(i=1;i<n;i++)
               {s[i]+=32;
               }
             cout<<s;
            }
            else if(j==n)
                {
                    for(i=0;i<n;i++)
                  {
                      s[i]+=32;
                  }
             cout<<s;
                }
            else
                {cout<<s;}
    return 0;
}
