#include <bits/stdc++.h>
using namespace std;
int n,m,parint[5002],val[5002],mx;string s,d;
int getleader(int u){
   return parint[u] = (parint[u] == u ? u :getleader(parint[u]));
}
void makefrind(int u ,int v){
   u = getleader(u); v = getleader(v);
    if(u != v){
    parint[u] = v;
    val[v] += val[u];
    mx = max(val[v],mx);
  }
}
int main()
{
    while(scanf("%d %d", &n, &m) == 2 && n){
            map<string,int>M;mx = 1;
        for(int i = 1; i <= n;i++){
             cin>>s;
            M[s] = i; val[i] = 1; parint[i] = i;
        }
        for(int i = 0; i < m;i++){
           cin>>s>>d;
           makefrind(M[s],M[d]);
        }
       printf("%d\n",mx);
    }
    return 0;
}
