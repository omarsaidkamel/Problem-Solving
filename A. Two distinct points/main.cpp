#include <iostream>
using namespace std;
int l1,r1,l2,r2,a,b,q;
int main()
{
    cin>>q;
    while(q--){
        cin>>l1>>r1>>l2>>r2;
        if(l1!=r2)cout<<l1<<" "<<r2<<endl;
        else cout<<r1<<" "<<l2<<endl;
    }
    return 0;
}
