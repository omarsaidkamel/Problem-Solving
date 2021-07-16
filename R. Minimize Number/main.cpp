#include <iostream>
using namespace std;
int main()
{
    int c=0,n,s=(int)1e9+6,a[205];bool f=true;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0){cout<<0<<"\n";return 0;}
        while(a[i]%2==0){
            a[i]/=2;c++;
        }
        if(c<s)s=c;
        c=0;
    }
    cout<<s<<"\n";
    return 0;
}
