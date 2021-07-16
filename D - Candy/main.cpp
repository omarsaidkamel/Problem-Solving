#include <iostream>
#include <cstring>
using namespace std;
int n,m,A[100001],B[100001],mem[100001][2];
int solve(int i,bool x){
    if(i == m)return 0;
    if(mem[i][x] != -1) return mem[i][x];
    int op1 = solve(i+1,1);int op2 = -1;
    if(x) op2 = solve(i+1,0) + A[i];
    return mem[i][x] = max(op1,op2);
}
int solve2(int i,bool x){
    if(i == n) return 0;
    if(mem[i][x] != -1) return mem[i][x];
    int op1 = solve2(i+1,1);int op2 = -1;
    if(x) op2 = solve2(i+1,0) + B[i];
    return mem[i][x] = max(op1,op2);
}
int main()
{
    while(scanf("%d%d",&n,&m),n||m){
        for(int i = 0; i < n; i++){
           for(int j = 0; j < m; j++){
               scanf("%d", A + j);
           }
           memset(mem,-1,sizeof mem);
           B[i] = solve(0,1);
        }
           memset(mem,-1,sizeof mem);
        printf("%d\n",solve2(0,1));
    }
    return 0;
}
