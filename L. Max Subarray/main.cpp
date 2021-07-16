#include <iostream>
using namespace std;
int main()
{
    int mn,t,n,a[109];
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
       for(int j=1;j<=n;j++) cin>>a[j];
       for(int j=1;j<=n;j++){
           mn=a[j];
        for(int h=j;h<=n;h++){
          if(mn<=a[h])
          {
              mn=a[h];
              cout<<mn<<" ";
          }
          else cout<<mn<<" ";
         }
       }
       cout<<"\n";
    }
    return 0;
}
