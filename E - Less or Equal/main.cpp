#include <bits/stdc++.h>
using namespace std;
int n,k,a[9999999];
int main()
{
    scanf("%d%d",&n,&k);
    a[0]=1;
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    sort(a,a+n+1);
    if(a[k]!=a[k+1]) printf("%d",a[k]);
    else puts("-1");
    return 0;
}
