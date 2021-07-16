#include <iostream>
using namespace std;
int h,a[1000],z,n,m;
int main()
{
    cin>>h;
    for(int i=1;i<h+1;i++)
        cin>>a[i];
        cin>>z;
    for(int i=1;i<z+1;i++)
        {
            cin>>n>>m;
               a[n-1]+=m-1;
               a[n+1]+=a[n]-m;
              a[n]=0;
        }
    for(int i=1;i<h+1;i++)
        cout<<a[i]<<"\n";
    return 0;
}
