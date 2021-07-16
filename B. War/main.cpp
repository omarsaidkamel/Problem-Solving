#include <iostream>
using namespace std;
int main()
{
    int n,A[10003];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",A+i);
    for(int i=0;i<n;i++){int c=0;
      for(int j=0;j<n;j++){
         if(A[i]>A[j]&&i!=j)c++;
      }
      if(i==n-1)cout<<c;
      else cout<<c<<" ";
    }
    return 0;
}
