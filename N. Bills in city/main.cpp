#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[(int)1e5+6],ma=-(int)1e6+6;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++){
        ma=max(abs(a[i+1]-a[i]),ma);
    }
    cout<<ma<<"\n";
    return 0;
}
