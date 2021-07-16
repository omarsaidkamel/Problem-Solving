#include <bits/stdc++.h>
using namespace std;
int t,n,m,coin[]={5,10,20,50,100,200,500,1000,2000,5000,10000};
long long int mem[12][300001];
long long solve(int i,int x){
     if(x==0)return 1;
     if(i==11) return 0;
     if(mem[i][x] != -1) return mem[i][x];
     long long int  op1 = solve(i+1,x),op2=0;
     if(x >= coin[i])op2 = solve(i,x-coin[i]);
     return mem[i][x] = op1 + op2;
}
int main()
{
    memset(mem,-1,sizeof mem);
    while(scanf("%d.%d",&n,&m)){
        t = (n*100) + m; if(!t)break;
        printf("%3d.%02d%17lld\n",n,m,solve(0,t));
    }
    return 0;
}
