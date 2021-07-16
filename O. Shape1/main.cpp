#include <iostream>
using namespace std;
int main()
{
    int n,m;cin>>n;m=n;
    for(int i=0;i<n;i++){
     for(int j=m;j>0;j--){
        cout<<'*';
      }
      cout<<endl;
       m--;
    }
    return 0;
}
