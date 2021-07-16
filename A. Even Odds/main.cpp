#include <iostream>
using namespace std;
long long int  n,m;
int main()
{
   cin>>n>>m;
    if((m<=n/2&&n%2==0)||(n%2==1&&(m<=(n/2)+1))) cout<<m+(m-1);
    else{
     if(n==m&&m%2==0)cout<<m;
     else if(n%2==0) cout<<(m-(n/2))*2;
     else if(n%2==1) cout<<(m-((n/2)+1))*2;
    }
    return 0;
}
