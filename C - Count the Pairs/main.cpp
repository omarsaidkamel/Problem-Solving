#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int c=0,a[100006],n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++){
     int o=upper_bound(a,a+n,a[i]+m)-lower_bound(a,a+n,a[i]+m);
     c+=o;
    }
    cout<<c<<"\n";
    return 0;
}
