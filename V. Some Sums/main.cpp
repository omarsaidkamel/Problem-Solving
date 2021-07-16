#include <iostream>
using namespace std;
int main()
{
    int n,t,a,b,s=0,c=0;cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
     {
          t=i;
         while(t!=0){c+=(t%10);t/=10;}
        if(c>=a&&c<=b)s+=i;
        c=0;
     }
     cout<<s;
    return 0;
}
