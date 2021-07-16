#include <bits/stdc++.h>
using namespace std;
int n,t,A[102],mem[102][50002];
int solve(int i,int a){
  if(i==n) return abs(a);
  if(mem[i][a] != -1) return mem[i][a];
  int op1 = solve(i+1,a-A[i]);
  int op2 = solve(i+1,a+A[i]);
  return mem[i][a] = min(op1,op2);
}
int main()
{
    scanf("%d",&t);
    while(t--){
        memset(mem,-1,sizeof mem);
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",A+i);
        printf("%d\n",solve(0,0));
    }
    return 0;
}
