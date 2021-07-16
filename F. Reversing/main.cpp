#include <iostream>
using namespace std;
int main()
{
    int n,a[(int)1e3+5];
    cin>>n;
    for(int i=n;i>0;i--) cin>>a[i];
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    return 0;
}
