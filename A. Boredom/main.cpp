#include <iostream>
#include <cstring>
using namespace std;
long long int n,x,mx,f[100002],mem[100002];
long long int solve(int i){
    if(i > mx) return 0;
    if(mem[i]!= -1) return mem[i];
    long long int op1 = solve(i+1);
    long long int op2 = solve(i+2) + (f[i] * i);
    return mem[i] = max(op1,op2);
}
int main(){
    memset(mem,-1,sizeof mem);
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
      scanf("%lld",&x); f[x]++;
      mx=max(x,mx);
    }
    cout<<solve(1);
    return 0;
}
