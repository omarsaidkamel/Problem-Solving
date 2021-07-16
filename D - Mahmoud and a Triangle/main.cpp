#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5+9;
int n;long long a[N];
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    sort(a,a+n);
    for(int i=1;i<n-1;i++){
        if(a[i]+a[i-1]>a[i+1]){
            cout<<"YES";
              return 0;
        }
    }
   cout<<"NO";
    return 0;
}
/*2 4 3 5
4 1 2*/
