#include <bits/stdc++.h>
using namespace std;
int n,w,l,mem[1001][3001];pair<int,int> p[1001];
bool comp(pair<int,int> p,pair<int,int> x){
    return p.second > x.second;
}
int solve(int i,int x){
    if(i == n)return 0;
    if(mem[i][x] != -1) return mem[i][x];
    int op1 = solve(i+1,x),op2 = -1;
    if(p[i].first <= x){
      op2 = solve(i+1,min(x - p[i].first,p[i].second)) + 1;
    }
    return mem[i][x] = max(op1,op2);
}
int main()
{
    while(scanf("%d",&n),n){
        for(int i = 0; i < n; i++) {
            scanf("%d %d",&w,&l);
            p[i].first = w;
            p[i].second = l;
        }
        sort(p,p+n,comp);
        memset(mem,-1,sizeof mem);int xx = -1;
        for(int i = 0; i < n; i++) {
          xx = max(xx,solve(i+1,p[i].second)+1);
        }
           printf("%d\n",xx);
    }
    return 0;
}
