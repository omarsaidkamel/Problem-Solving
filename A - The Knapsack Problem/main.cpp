#include <bits/stdc++.h>
using namespace std;
int b,n,S[2001],V[2001],mem[2001][2001];
int solve(int i,int W){
  if(i == n)return 0;
  if(mem[i][W] != -1)return mem[i][W];
  int op1 = solve(i + 1,W);
  int op2 = -1;
  if(S[i] <= W) op2 = solve(i + 1,W - S[i]) + V[i];
  return mem[i][W] = max(op1,op2);
}
int main()
{
    memset(mem,-1,sizeof mem);
    scanf("%d%d",&b,&n);
    for(int i=0;i<n;i++) scanf("%d%d",S+i,V+i);
    cout<<solve(0,b)<<"\n";
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int b,t,si,val,mem[2001][2001];vector<pair<int,int>>v;
int solve(int i,int x){
   if(i == t || x == 0) {
     return 0;
   }
   if(mem[i][x] != -1){
     return mem[i][x];
   }
       int g = solve(i+1,x);int h = -1;
       if(x >= v[i].first){
           h = solve(i+1 , x - v[i].first)+v[i].second;
       }
       return mem[i][x]= max(g,h);
}
int main()
{
    memset(mem,-1,sizeof mem);
    scanf("%d%d",&b,&t);
    for(int i = 0; i < t; i++){
        scanf("%d%d",&si,&val);
        v.push_back({si,val});
    }
    cout<<solve(0,b);
    return 0;
}
*/
