#include <iostream>
using namespace std;
int i,s,h,d,m,y,a[1000],x;
int main()
{
    cin>>m;y=m;
    for(i;i<m;i++)
        {cin>>a[i];}
   for(h;h<y;h++)
    {
        if(h%2==1)
        {
         if(a[m-1]>a[x])
            {
                d=a[m-1]+d;
                m--;
            }
            else
                {
                    d=a[x]+d;
                    x++;
                }
        }
        else
            {
                if(a[m-1]>a[x])
            {
                s=a[m-1]+s;
                m--;
            }
            else
                {
                    s=a[x]+s;
                    x++;
                }
            }
    }
    cout<<s<<" "<<d;
    return 0;
}
