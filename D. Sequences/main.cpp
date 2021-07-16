#include <bits/stdc++.h>
using namespace std;
int t,n,A[20001],B[20001],mx;
int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",A+i);
        mx = -1;memset(B,0,sizeof B);
        for(int i=n-1;i>=0;i--){
            B[A[i]] = B[A[i]+1] + 1;
            mx = max(B[A[i]],mx);
        }
        printf("%d\n",mx);
    }
    return 0;
}
