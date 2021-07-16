#include <iostream>
using namespace std;
int main()
{
    int n,f,m,a[105][107];bool d=false;
    cin>>n>>m;
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        cin>>a[i][j];
      }
    }
    cin>>f;
    for(int i=0;i<n;i++){
     for(int j=0;j<m;j++){
        if(a[i][j]==f)
        {
         cout<<"will not take number";
         return 0;
        }
      }
    }
    cout<<"will take number";
    return 0;
}
