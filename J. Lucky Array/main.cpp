#include <iostream>
using namespace std;
long long int n,a[(int)1e5+8],h=(int)1e5+7,c;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
       if(a[i]<h)h=a[i];
    }
     for(int i=1;i<=n;i++){
        if(a[i]==h)c++;
     }
    if(c%2!=0)cout<<"Lucky";
    else cout<<"Unlucky";
    return 0;
}
