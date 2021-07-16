#include <iostream>
using namespace std;
int main()
{
    int n,c,m=-1;cin>>n;
    for(int i=0;i<n;i++){
     cin>>c;if(c>m)m=c;
    }
    cout<<m;
    return 0;
}
