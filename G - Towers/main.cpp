#include <iostream>
using namespace std;
long long a[19999],c[19999],h,m,n,x;
int main()
{
    cin>>m;
    for(int i=0;i<m;i++)
            {cin>>a[i];
            c[a[i]]++;
            if(a[i]>n)
                n=a[i];
            }
    for(int i=1;i<=n;i++)
            {
                if(c[i]!=0)
              h++;
                if(c[i]>x)
                 x=c[i];
            }
           cout<<x<<" "<<h;
    return 0;
}
