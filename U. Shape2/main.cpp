#include <iostream>
using namespace std;
int main()
{
    int n,i;cin>>n;
    for(i=1;i<=n;i++){
       for(int j=n-i;j>0;j--) cout<<" ";
         for(int h=0;h<i;h++) cout<<"*";
         for(int h=0;h<i-1;h++) cout<<"*";
         cout<<"\n";
    }
    return 0;
}
