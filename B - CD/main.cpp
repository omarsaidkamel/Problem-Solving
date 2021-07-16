#include <iostream>
using namespace std;
int main()
{
    int k,n,a[21];
    while(scanf("%d %d", &k, &n) != EOF){
            int ans = -1,x;
        for(int i = 0; i < n; i++)scanf("%d",a+i);

        for(int i = 0; i < (1<<n) ; i++){
                int sum = 0;
           for(int j = 0; j < n; j++){
             if((i>>j)&1) sum += a[j];
           }
           if(sum == k){
            ans = sum;x = i;
            break;
           }
        else {
                if(sum > ans && sum < k)
                    {ans = sum;x = i;}
             }
        }
            for(int j = 0; j < n; j++)
                if((x>>j)&1) printf("%d ",a[j]);
            printf("sum:%d\n",ans);
    }
    return 0;
}
