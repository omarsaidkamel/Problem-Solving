#include <iostream>
using namespace std;
int main()
{
    long long int n,A[60][60];
    scanf("%lld",&n);A[0][0]=A[1][0]=A[1][1]=1;
    for(int i=2;i<n;i++){
      for(int j=0;j<=i;j++){
           if(j==0)A[i][j]=1;
           else if(j==i)A[i][j]=1;
           else A[i][j]=A[i-1][j]+A[i-1][j-1];
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<=i;j++){
           if(i==j)cout<<A[i][j];
           else cout<<A[i][j]<<" ";
      }
      puts("");
    }
    return 0;
}
