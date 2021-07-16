#include <iostream>
using namespace std;
int main()
{
    int t,n;cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
      while(n>0){
        cout<<n%2;
        n/=2;
      }
      cout<<"\n";
    }
    return 0;
}
