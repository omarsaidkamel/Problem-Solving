#include <iostream>
#include <algorithm>
using namespace std;
long long int n,a[100009],b[100009],m,l,t,r;
int main()
{
    cin>>n;
    for(int i = 1 ; i <= n ; i++ ){
        cin>>a[i];b[i]=a[i];
    }
    sort(a,a+n+1);
   // for(int i = 1 ; i <= n ; i++ ) cout<<a[i]<<" ";
    for(int i = 2 ; i <= n ; i++){
        a[i] += a[i-1]; b[i] += b[i-1];
    }
    //puts("");
    //for(int i = 1 ; i <= n ; i++ ) cout<<b[i]<<" ";
    cin>>m;
    for(int i = 0 ; i < m ; i++ ){
       cin>>t>>l>>r;
       if(t == 1) cout<<b[r] - b[l-1]<<"\n";
       else  cout<<a[r] - a[l-1]<<"\n";
    }
    return 0;
}
