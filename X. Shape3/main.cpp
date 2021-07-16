#include <iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++)cout<<" ";
        for(int h=0;h<i;h++)cout<<"*";
        for(int f=0;f<i-1;f++)cout<<"*";
        cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        for(int f=0;f<i-1;f++)cout<<" ";
        for(int h=0;h<n-i;h++)cout<<"*";
        for(int j=0;j<=n-i;j++)cout<<"*";
        cout<<"\n";
    }
    return 0;
}
