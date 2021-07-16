#include <iostream>
using namespace std;
int main()
{
    int n,a,ma=(int)1e5+7,j;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a<ma){ma=a;j=i;}
    }
    cout<<ma<<" "<<j;
    return 0;
}
