#include <iostream>
using namespace std;
int main()
{
    int n,f=0,m=1,s=0;cin>>n;
   if(n==0){return 0;}
   if(n==1){cout<<0;return 0;}
    cout<<0<<" "<<1;
    for(int i=0;i<n-2;i++){
         f+=s+m;
         cout<<" "<<f;
         if(s>=m)m=f;else if(s<m)s=f;
         f=0;
    }
    return 0;
}
