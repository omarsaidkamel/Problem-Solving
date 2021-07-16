#include <iostream>
using namespace std;
int main()
{
    long long int  n,q,l,r,s=0,a[1000006];
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=0;i<q;i++){
     cin>>l>>r;
      for(int j=l;j<=r;j++) s+=a[j];
      cout<<s<<"\n";s=0;
    }
    return 0;
}
