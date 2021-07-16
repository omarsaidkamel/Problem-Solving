#include <iostream>
using namespace std;
int main()
{
    int n,l,r,arr[10000],d=0;
    cin>>n;
    for(int i=0;n>i;i++)
        {cin>>l>>arr[i];}
        cin>>r;
for(int x=0;x<n;x++ )
    {if(r>arr[x])
      { d=d+1;
      }
    }
    cout<<n-d;
    return 0;
}
