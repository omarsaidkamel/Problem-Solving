#include <iostream>
using namespace std;
long long t,n,k;
int main()
{
    cin>>t;
    while(t--){
        cin>>n>>k;
        if((n-k)%6==0)cout<<(n-k)/6<<"\n";
        else cout<<((n-k)/6)+1<<"\n";
    }
    return 0;
}
