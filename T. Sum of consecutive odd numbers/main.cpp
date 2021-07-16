#include <iostream>
using namespace std;
int main()
{
    int n,x,y,s=0;cin>>n;
    for(int i=0;i<n;i++){
       cin>>x>>y;
       for(int j=0;j<y;j++){
        if(x%2==0)x++;
        s+=x;x+=2;
       }
       cout<<s<<"\n";s=0;
    }
    return 0;
}
