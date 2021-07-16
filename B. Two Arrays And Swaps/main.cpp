#include <iostream>
#include <algorithm>
using namespace std;
bool btos(int a,int b){
   if(a<b)return false;
   return true;
}
int main()
{
    int t,n,k,A[32],B[32];
    scanf("%d",&t);
    while(t--){int sum=0;
      scanf("%d%d",&n,&k);
      for(int i=0;i<n;i++)scanf("%d",A+i);
      for(int i=0;i<n;i++)scanf("%d",B+i);
      sort(A,A+n);
      sort(B,B+n,btos);
      for(int i=0;i<n;i++){
        if(A[i]<B[i]&&k){
          sum+=B[i];k--;
        }
        else sum+=A[i];
      }
      printf("%d\n",sum);
    }
    return 0;
}
