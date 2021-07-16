#include <bits/stdc++.h>
#define  ll long long
using namespace std;
long long p[100000],x,h,a[1000009];

void isprimes(ll n){
     for(ll i = 2 ; i <= n ; i++){
        bool b = 1;
        for(ll j = 2 ; j * j <= n ; j++){
            if( i % j == 0 && i != j) b = 0;
        }
        if(b){p[x++] = i;}
     }
}
void number(){
     for(ll i = 0 ; i < x ; i++){
        ll t = p[i];
        while(t<(ll)1e12+2){
            t*=p[i];
            a[h++] = t;
        }
     }
}

int main()
{
    ll n,c,b ;
    isprimes(200000);
    number();
    sort(a,a+h);
    scanf("%lld",&n);
    for(long long  i = 0 ; i < n ; i++ ){
        scanf("%lld%lld",&c,&b);
    cout<<upper_bound(a,a+h,b) - lower_bound(a,a+h,c)<<"\n";
    }
    return 0;
}
