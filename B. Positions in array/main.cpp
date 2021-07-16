#include <iostream>
using namespace std;
int main()
{
    int n,a[(int)1e5+7];
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]<=10) cout<<"A["<<i<<"] = "<<a[i]<<"\n";
    }
    return 0;
}
