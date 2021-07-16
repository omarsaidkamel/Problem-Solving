#include <iostream>
using namespace std;
int main()
{
    int n,m,a[104][104];
    cin>>n>>m;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cin>>a[i][j];
       }
    }
     for(int i=0;i<n;i++){
      for(int j=m-1;j>=0;j--){
        cout<<a[i][j]<<" ";
       }
       cout<<"\n";
    }
    return 0;
}
