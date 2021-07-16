#include <iostream>
using namespace std;
int main()
{
     int h;int v[100],b=0;
    cin>>h;
    for(int i=0;i<h;i++)
        {cin>>v[i];}
        for(int i=0;i<h;++i)
            {if(b<v[i])
                {b=v[i];}
            }
            cout<<b;
    return 0;
}
