#include <iostream>
using namespace std;
int A[102],t,n;
int sum(int x){
  if(x==0) return A[x];
  return (sum(x-1) + A[x]);
}
int main()
{
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        for(int j=0;j<n;j++)scanf("%d",A + j);
        printf("Case %d: %d\n",i,sum(n-1));
    }
    return 0;
}
