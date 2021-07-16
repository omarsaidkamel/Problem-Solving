#include <bits/stdc++.h>
using namespace std;
int n,coin[]={1,5,10,25,50},mem[6][7500];
int solve(int i,int x){
   if(x==0)return 1;
   if(i==5)return 0;
   if(mem[i][x] != -1) return mem[i][x];
   int op1 = solve(i+1,x);int op2=0;
   if(x >= coin[i])op2 = solve(i,x-coin[i]);
   return mem[i][x] = (op1 + op2);
}
int main()
{
    memset(mem,-1,sizeof mem);
    while(scanf("%d",&n)!=EOF){
        printf("%d\n",solve(0,n));
    }
    return 0;
}
