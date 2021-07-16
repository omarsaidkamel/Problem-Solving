#include <iostream>
using namespace std;
typedef long long ll;
string s;int nk[4],np[4],nc[4];ll r;
bool OK(ll n){
    ll u = r;
    for(int i = 0; i < 3; i++){
        if(nc[i] * n > nk[i]){
          if(((nc[i] * n) - nk[i]) * np[i] > u)return false;
          u -= ((nc[i] * n) - nk[i]) * np[i];
        }
    }
    return true;
}
ll BinarySearch(){
ll l = 0,h = 10000000000001,mid;
    while(h - l > 0){
    mid = (h + l + 1)/2;
        if(OK(mid)) l = mid;
        else h = mid - 1;
    }
    return h;
}
int main()
{
    cin>>s;
    scanf("%d%d%d%d%d%d%lld",nk,nk+1,nk+2,np,np+1,np+2,&r);
    for(int i = 0; i < s.size() ; i++){
        if(s[i] == 'B') nc[0]++;
        else if(s[i] == 'S') nc[1]++;
        else  nc[2]++;
    }
    cout<<BinarySearch();
    return 0;
}
