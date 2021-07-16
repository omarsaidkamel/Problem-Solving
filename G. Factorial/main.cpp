#include <iostream>
using namespace std;
int main()
{
    long long t,n,m=1;cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=1;j<=n;j++) m*=j;
        cout<<m<<"\n";m=1;
    }
    return 0;
}
