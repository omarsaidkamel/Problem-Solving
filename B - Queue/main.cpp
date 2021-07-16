#include <iostream>
using namespace std;
int n,A[100003],B[100003],mi=1000000002;
int main()
{
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) scanf("%d",A+i);
    for(int i = n; i > 0; i--){
        mi = min(mi,A[i]);B[i] = mi;
    }
    for(int i = 1; i <= n; i++){
       int y = lower_bound(B+1,B+n+1,A[i]) - B;
       if(A[i] == y)printf("-1 ");
       cout<<y<<" "<<A[i]<<" "<<B[i]<<"\n";
    }
    return 0;
}
