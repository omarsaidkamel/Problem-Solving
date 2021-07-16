#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,A[100002],q,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",A+i);
    sort(A,A+n);
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&m);
       int x = upper_bound(A,A+n,m) - A;
       printf("%d\n",x);
    }
    return 0;
}
