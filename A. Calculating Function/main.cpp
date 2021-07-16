#include <iostream>
using namespace std;
long long int n;
int main()
{
    cin>>n;
    if(n%2==0) cout<<n-n/2<<endl;
    else cout<<(n-(n/2))*-1<<endl;
    return 0;
}
