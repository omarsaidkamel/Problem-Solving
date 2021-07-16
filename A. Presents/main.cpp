#include <iostream>
using namespace std;
int a,n,m[101];
int main()
{     cin>>n;
     for(int i=1;i<=n;i++)
         {cin>>a; m[a]=i;}
    for(int i=1;i<=n;i++)
            cout<<m[i]<<" ";
    return 0;
}
