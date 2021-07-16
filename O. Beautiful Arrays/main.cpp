#include <iostream>
using namespace std;
int main()
{
   int n,t,a[106],z=0;bool flag=false;cin>>t;
   for(int i=0;i<t;i++){
        cin>>n;
    for(int j=0;j<n;j++) {
            cin>>a[j];
            if(a[j]==0)z++;
    }
     if(z==n-1)cout<<"yes\n";
     else cout<<"no\n";z=0;
   }
    return 0;
}
