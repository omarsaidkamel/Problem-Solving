#include <iostream>
using namespace std;
int main()
{
    long long int a,s,d,f=0,z=0,x=0,c=0;
    cin>>a;
    for(long long int i=0;i<a;i++)
        {
          cin>>s;
          z=s+z;
        }
        cin>>d;
    for(long long int i=0;i<d;i++)
        {
            cin>>f;
            if(f>c)
            {x=f+x;c=f;}else{x=f+x;}
        }
        cout<<z-x<<"\n";
        cout<<z-c;
    return 0;
}
