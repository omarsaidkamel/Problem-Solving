#include <iostream>
using namespace std;
int a,d,x,f,i,j,g,u;
int main()
{
    cin>>a>>d;
    if(d<0)
        d*=-1;
    for(i=0;i<a;i++)
        {
            cin>>f;
            g+=f;
        }
         if(g<0)
            g*=-1;
        if(g==0)
            cout<<0;
        else{
        if(g%d==0)
            cout<<g/d;
        else
            cout<<(g/d)+1;
        }
    return 0;
}
