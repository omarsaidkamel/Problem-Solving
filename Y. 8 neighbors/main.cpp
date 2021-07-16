#include <iostream>
using namespace std;
int main()
{
    int n,m,px,py; char a[104][104];
    cin>>n>>m;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=m;j++){
        cin>>a[i][j];
       }
    }
    cin>>px>>py;
    if(a[px-1][py-1]=='.'||a[px-1][py]=='.'||a[px-1][py+1]=='.'||a[px][py-1]=='.'||a[px][py+1]=='.'||a[px+1][py-1]=='.'||a[px+1][py]=='.'||a[px+1][py+1]=='.')
    cout<<"No";
    else cout<<"Yes";
    return 0;
}
