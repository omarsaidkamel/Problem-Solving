#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[109],b,n,sum=0;
    scanf("%d %d",&n,&b);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]<0) sum+=a[i]*-1;
        if(a[i]==0||b-1==0)break;
        b--;
    }
    cout<<sum<<endl;
    return 0;
}
