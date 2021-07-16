#include <iostream>
#include <algorithm>
using namespace std;
int n,m,A[102],B[102],c;bool AT[102],BT[102];
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",A+i);
    scanf("%d",&m);
    for(int i=0;i<m;i++)scanf("%d",B+i);
    sort(A,A+n);sort(B,B+m);
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(abs(A[i]-B[j])<=1 && (!AT[i] && !BT[j])){
            c++;AT[i]=1;BT[j]=1;
        }
      }
    }
    printf("%d",c);
    return 0;
}
