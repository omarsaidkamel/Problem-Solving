#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int mod=1e9+7,a[4];
    scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
    int x=a[0],y=a[1],z=abs(a[0]-a[1]),
    i=a[0],b=a[1],c=a[2];
    while(y>1){
        a[0] = (i*a[0])%mod;y--;
    }
    while(x>1){
        a[1] = (b*a[1])%mod;x--;
    }
    while(z>1){
        a[2] = (c*a[2])%mod;z--;
    }
    if(!z)a[2]=1;
    sort(a,a+3);
    cout<<a[0]<<" "<<a[1]<<" "<<a[2];
    return 0;
}
