#include <iostream>
using namespace std;
int main()
{
    int n,a,b,sum=0,mx=0;
    scanf("%d",&n);
    while(n--){
       scanf("%d%d",&a,&b);
       sum+=b;
       if(sum<=a)sum=0;
       else sum-=a;
       mx=max(sum,mx);
    }
    printf("%d",mx);
    return 0;
}
