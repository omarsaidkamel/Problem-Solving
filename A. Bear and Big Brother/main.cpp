#include <iostream>
using namespace std;
int a,b,n;
int main()
{ cin>>a>>b;
    if(a>b)
       {cout<<0;}
    if(a==b)
    {cout<<1;}
    if(a<b)
        {
           for(int s=0;s<100;s++)
             { a*=3;b*=2;n++;
                if(a>b)
                {break;}
             }
        cout<<n;
        }

    return 0;
}
