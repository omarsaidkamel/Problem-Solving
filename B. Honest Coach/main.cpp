#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t,n,A[55];
    scanf("%d",&t);
    while(t--){
       scanf("%d",&n);int x=10002;
       for(int i=0;i<n;i++) scanf("%d",A+i);
       sort(A,A+n);
       for(int i=0;i<n-1;i++) x = min(x,A[i+1]-A[i]);
       printf("%d\n",x);
    }
    return 0;
}
