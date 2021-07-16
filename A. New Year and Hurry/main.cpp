#include <iostream>
using namespace std;
int main()
{
    int n,k,sum=0,i;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        sum+=i*5;
        if(sum+k>240)break;
    }
    cout<<i-1;
    return 0;
}
