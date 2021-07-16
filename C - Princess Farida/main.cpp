#include <bits/stdc++.h>
using namespace std;
int t,n,A[10005];long long mem[10005][2];
long long solve(int i,int x){
    if(i >= n)return 0;
    if(mem[i][x]!= -1) return mem[i][x];
    long long op1 = solve(i+1,1),op2 = -1;
    if(x) op2 = solve(i+1,0) + A[i];
    return mem[i][x]= max(op1,op2);
}
int main()
{
    scanf("%d",&t);
    for(int j = 1; j <= t; j++){
        memset(mem,-1,sizeof mem);
        scanf("%d",&n);
        for(int i = 0; i < n; i++) scanf("%d",A + i);
        printf("Case %d: %lld\n",j,solve(0,1));
    }
    return 0;
}
