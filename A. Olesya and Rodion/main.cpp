#include <iostream>
using namespace std;
int n,t;
int main()
{
    cin>>n>>t;
     if(t==10&&n==1) cout<<-1;
     else if(t==10){
        cout<<1;
        for(int i=0;i<n-1;i++) cout<<0;
    }
    else
    for(int i=0;i<n;i++) cout<<t;
    return 0;
}
