#include <bits/stdc++.h>
using namespace std;
int t,n,b,W[1001],V[1001],mem[52][1001];
int solve(int i,int RW){
    if(i==n ||RW <= 0) return 0;
    if(mem[i][RW] != -1) return mem[i][RW];
    int op1 = solve(i+1,RW);
    int op2 = -1;
    if(RW >= W[i]) op2 = solve(i + 1,RW - W[i]) + V[i];
    return mem[i][RW] = max(op1,op2);
}
int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&b,&n);
        memset(mem,-1,sizeof mem);
        for(int i = 0; i < n; i++) scanf("%d%d",W+i,V+i);
        printf("Hey stupid robber, you can get %d.\n",solve(0,b));
    }
    return 0;
}
