#include <iostream>
using namespace std;
long long a[(int)1e5+9],x;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>x;
    for(int i=0;i<n;i++){
        if(a[i]==x)
        {cout<<i;return 0;}
    }
    cout<<-1;
    return 0;
}
