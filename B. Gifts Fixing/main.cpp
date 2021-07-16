#include <iostream>
using namespace std;
int main()
{
    long long int t,n,A[55],B[55];
    scanf("%lld",&t);
    while(t--){
      scanf("%lld",&n);long long int c=0,mia=10e9+1,mib=10e9+1;
      for(int i=0;i<n;i++){
        scanf("%lld",A+i);
        mia=min(mia,A[i]);
      }
      for(int i=0;i<n;i++){
        scanf("%lld",B+i);
        mib=min(mib,B[i]);
      }
      for(int i=0;i<n;i++){
        if(A[i]>mia&&B[i]>mib)c+=max(A[i]-mia,B[i]-mib);
        else if(A[i]>mia) c+=A[i]-mia;
        else if(B[i]>mib) c+=B[i]-mib;
      }
       printf("%lld\n",c);
    }
    return 0;
}
