#include <iostream>
using namespace std;
int main()
{
    int n,a[(int)1e5+5];cin>>n;
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++){
    if(a[i]>0)cout<<1<<" ";
        else if(a[i]<0)cout<<2<<" ";
        else cout<<0<<" ";
        }
    return 0;
}
