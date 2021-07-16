#include <iostream>
using namespace std;
int main()
{
    int k,n,a[21],t;
    scanf("%d",&t);
    while(t--){
        bool done = 0;
        scanf("%d%d",&k,&n);
        for(int i = 0; i < n; i++)scanf("%d",a+i);
        for(int i = 0; i <(1<<n); i++){
            int sum = 0;
           for(int j = 0; j < n; j++){
             if((i>>j)&1) sum += a[j];
           }
           if(sum == k){
            done = 1;
            break;
           }
        }
       puts(done?"YES":"NO");
    }
    return 0;
}
