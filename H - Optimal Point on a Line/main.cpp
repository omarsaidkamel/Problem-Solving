#include <bits/stdc++.h>
using namespace std;
int n,a[(int)(3*1e5+9)];
long long sum;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    sort(a,a+n);
    if(n%2==0) printf("%d",a[(n/2)-1]);
    else printf("%d",a[n/2]);
    return 0;
}
