#include <iostream>
using namespace std;
int main()
{
    int t,A[1002],n,c;
    scanf("%d",&t);
    while(t--){c=0;
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",A+i);
        for(int i=1;i<n;i++){
          for(int j=0;j<i;j++){
            if(A[i]>=A[j]) c++;
          }
        }
        printf("%d\n",c);
    }
    return 0;
}
