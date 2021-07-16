#include <iostream>
using namespace std;
int n,a[1000006],m,h;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>h;a[h]++;
    }
    for(int i=1;i<=m;i++) cout<<a[i]<<"\n";
    return 0;
}
