#include <iostream>
using namespace std;
int main()
{
    int n;long long int m,mx = -1e18+2;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&m);
        if(m>mx)mx=m;
    }
    printf("%lld",mx);
    return 0;
}
