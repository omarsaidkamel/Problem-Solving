#include <iostream>
using namespace std;
typedef long long ll;
ll A[1000002],B[1000002],n,m;
bool CanBake(ll x){
    ll p = m;
    for(ll i = 0; i < n; i++){
        if(B[i] - (A[i] * x) < 0){
          if((B[i] + p) - (A[i] * x) < 0) return false;
           p = (B[i] + p) - (A[i] * x);
        }
    }
    return true;
}
ll BinarySearch(){
 ll l = 0,h = 2000000000 ,mid;
 while(h - l > 0){
    mid = (h + l + 1) / 2;
    if(CanBake(mid)) l = mid;
    else h = mid - 1;
 }
 return h;
}
int main()
{
    scanf("%lld%lld",&n,&m);
    for(ll i = 0; i < n; i++) scanf("%lld",A + i);
    for(ll i = 0; i < n; i++) scanf("%lld",B + i);
    cout<<BinarySearch();
    return 0;
}
