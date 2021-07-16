#include <iostream>
using namespace std;
int main()
{
    int t,x,y,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&x,&y,&n);
        int f = n % x;
        if(f<y) cout<<n-abs((x-y)+f)<<"\n";
        else cout<<n-abs(y-f)<<"\n";
    }
    return 0;
}
