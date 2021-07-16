#include <iostream>
using namespace std;
int a,s,d,f,m;
int main()
{
    cin>>a;
    for(int i=0;i<a;i++)
        {
            cin>>s>>d;
           f-=s;f+=d;
           if(m<f) m=f;
           if(f<0) f=0;
        }
        cout<<m;
    return 0;
}
