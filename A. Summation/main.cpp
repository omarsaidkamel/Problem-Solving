#include <iostream>
using namespace std;
int main()
{
    long long f=0; int n,m;cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        f+=m;
    }
    if(f>0)cout<<f;
    else cout<<f*-1;
    return 0;
}
