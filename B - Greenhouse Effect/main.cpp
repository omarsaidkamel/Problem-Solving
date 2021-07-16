#include <bits/stdc++.h>
using namespace std;
int A[5001],n,m,mem[5001][5001];double d;
int solve(int i,int x){
    if(i == n)return 0;
    if(mem[i][x] != -1)return mem[i][x];
    int op1 = solve(i+1,x),op2 = -1;
    if(A[i] >= x)op2 = solve(i+1,A[i]) + 1;
    return mem[i][x] = max(op1,op2);
}
int main()
{
    scanf("%d %d",&n,&m);memset(mem,-1,sizeof mem);
    for(int i = 0; i < n; i++) scanf("%d %lf",A+i,&d);
    printf("%d",n - solve(0,0));
    return 0;
}
