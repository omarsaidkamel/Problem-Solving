#include <iostream>
using namespace std;
int s,r,n,a[(int)1e6+7];
int main()
{
    cin>>s;
    int h=s;
    for(int i=0;i<s;i++){
           cin>>r;a[r]++;
         while(a[h]==1){cout<<h<<" ";h--;}
         cout<<endl;
    }
    return 0;
}
