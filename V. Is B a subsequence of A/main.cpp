#include <iostream>
using namespace std;
int main()
{
    int n,m,a[10007],b[10007],h=0;
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i]==b[h])h++;
    }
    if(h==m)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
