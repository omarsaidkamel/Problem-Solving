#include <bits/stdc++.h>
using namespace std;
int t,n,m,a,b,mx,parint[30002],val[30002];
int get_leader(int u){
 return parint[u] =(parint[u] == u ? u : get_leader(parint[u]));
}
void make_frind(int u,int v){
  u = get_leader(u); v = get_leader(v);
  if(u != v){
    parint[u] = v;
    val[v] += val[u];
    mx = max(mx,val[v]);
  }
}
void inti(){
   iota(parint,parint+n,0);
   fill(val,val+n,1);mx=1;
}
int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);inti();
        for(int i=0;i<m;i++){
          scanf("%d %d",&a,&b);
           make_frind(a,b);
        }

        printf("%d\n",mx);
    }
    return 0;
}
