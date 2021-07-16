#include <iostream>
using namespace std;
int n,m,b,x,l,arr[107];
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++){
    cin>>b; arr[b]++;
    }
    cin>>m;
    for(int i=1;i<=m;i++){
    cin>>b; arr[b]++;
    }
    for(int i=1;i<=n;i++){
      if(arr[i]==0)
      {cout<<"Oh, my keyboard!";return 0;}
    }
    cout<<"I become the guy.";
    return 0;
}
