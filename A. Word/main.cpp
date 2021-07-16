#include <iostream>
using namespace std;
string d;int g,s;
int main()
{
   cin>>d;
   for(int i=0;i<d.size();i++)
    {
        if(d[i]>96)
        s++;
        else
            g++;
    }
    if(g>s)
    {
        for(int i=0;i<d.size();i++)
            {
                if(d[i]>96)
                d[i]=d[i]-32;
            }
        cout<<d;
    }
    else
        {for(int i=0;i<d.size();i++)
            {
                if(d[i]<96)
                d[i]=d[i]+32;
            }
        cout<<d;
        }
    return 0;
}
