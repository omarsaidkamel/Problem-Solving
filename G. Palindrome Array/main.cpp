#include <iostream>
using namespace std;
int main()
{
    int n,m,a[(int)1e5];cin>>n;m=n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]!=a[m-1])
        {
            cout<<"NO";return 0;
        }
        m--;
    }
    cout<<"YES";
    return 0;
}
