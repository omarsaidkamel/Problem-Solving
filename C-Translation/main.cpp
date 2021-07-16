#include <iostream>
using namespace std;
string s,m;int k,d,ds;
int main()
{
   cin>>s>>m;
   k=s.size();
   ds=k-1;
for(int i=0;i<k;i++)
    {
        if(s[i]==m[ds])
            {d++;}
       ds--;
    }
    if(d==k)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
