#include <bits/stdc++.h>
using namespace std;
int n,m,a,b,t,val[10003],parent[10003];
int getleader(int u){
    if(parent[u] == u) return u;
    return parent[u] = getleader(parent[u]);
}
void makefrind(int u,int v){
    u = getleader(u);
    v = getleader(v);
    if(u != v){
      parent[v] = u;
      val[u]+= val[v];
    }
}
void init(){
 iota(parent,parent+n,0);
}
int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);bool f = 1;init();
        for(int i = 0; i < n; i++) scanf("%d",val + i);
        for(int i = 0; i < m; i++) {
            scanf("%d%d",&a,&b);
            makefrind(a,b);
        }
        for(int i = 0; i < n; i++) {
            if(val[getleader(i)] != 0){
               f=0;break;
            }
        }
        puts(f ? "POSSIBLE" : "IMPOSSIBLE");
    }
    return 0;
}
