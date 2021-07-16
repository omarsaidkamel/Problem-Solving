#include <iostream>
using namespace std;
int a,s,d,f,e,m[10000];
int main()
{
    cin>>a>>s;
    for(int i=0;i<s;i++)
        {
            cin>>d>>f;
            m[d]+=f;
            e=max(e,d);
        }
    for(int i=0;i<e;i++)
        {
            if(a>i)
               a+=m[i];
        }
        if(a>e)
            cout<<"YES";
        else
            cout<<"NO";
        return 0;
}
