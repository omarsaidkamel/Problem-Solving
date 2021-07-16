#include <iostream>
using namespace std;
int main()
{
    int n,l,r,x,a[16],y,c=0;
    scanf("%d%d%d%d",&n,&l,&r,&x);
    for(int i = 0 ; i < n ; i++)scanf("%d",a + i);
    for(int i = 0 ; i < (1<<n) ; i++){
    bool f = 0,s = 0;
       for(int j = 0 ; j < n ; j++){
           int mx=-1,mn=1000000,sum=0;
            for(j=0; j<n; j++)
            {
                if((i>>j)&1)
                {
                    sum += a[j];
                    mx = max(mx,a[j]);
                    mn = min(mn,a[j]);
                }
            }
            if(l <= sum && sum <= r && (mx - mn) >= x)
                c++;
       }
    }
    printf("%d",c);
    return 0;
}
