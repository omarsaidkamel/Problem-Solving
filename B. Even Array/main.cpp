#include <iostream>
using namespace std;
int main()
{
    int n,t,A[50];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);int o=0,e=0;
        for(int i=0;i<n;i++){
            scanf("%d",A+i);
            if(A[i]%2!=i%2&& A[i]%2==1)o++;
            else if(A[i]%2!=i%2&& A[i]%2==0) e++;
        }
        if(o==e)printf("%d\n",o);
        else printf("-1\n");
    }
    return 0;
}
