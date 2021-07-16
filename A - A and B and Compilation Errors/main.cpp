#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+6;
long long n,a[N],h[N],k[N];
int main()
{
    scanf("%lld",&n);
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    sort(a,a+n);
    for(int i=0;i<n-1;i++) scanf("%lld",&h[i]);
    sort(h,h+n-1);
    for(int i=0;i<n-2;i++) scanf("%lld",&k[i]);
    sort(k,k+n-2);
    for(int i=0;i<n;i++)
    {
     if(i==n-1){ cout<<a[n-1]<<"\n";break;}
     if(a[i]!=h[i]){cout<<a[i]<<"\n";break;}
    }
     for(int i=0;i<n-1;i++)
     {
     if(i==n-1){ cout<<h[n-1]<<"\n";break;}
     if(h[i]!=k[i]){cout<<h[i]<<"\n";break;}
     }
    return 0;
}
