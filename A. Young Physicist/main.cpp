#include <iostream>
using namespace std;
int n,x,y,z,a,b,c;
int main()
{
    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        a+=x;b+=y;c+=z;
    }
    cout<<(a==0&&b==0&&c==0?"YES":"NO");
    return 0;
}
