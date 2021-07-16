#include <iostream>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int x = n;n--;
        while(n--){
            printf("%d ",x);
        }
            printf("%d\n",x);
    }
    return 0;
}
