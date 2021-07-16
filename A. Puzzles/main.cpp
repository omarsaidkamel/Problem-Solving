#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,a[60],mx=155555;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++) scanf("%d",a+i);
    sort(a,a+m);
    for(int i=0;n+i-1<m;i++){
         mx = min(a[n+i-1]-a[i],mx);
         //cout<<a[n+i-1]<<" "<<a[i]<<"\n";
    }
    printf("%d",mx);
    return 0;
}
//5 7 10 10 12 22
