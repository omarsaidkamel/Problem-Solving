#include <iostream>
#include <vector>
using namespace std;
vector<int>v[2003];
int vis[2003];bool cyc;
int t,n,m,g,h;
void DFS(int d,int c){
  vis[d] = c;
  for(int x : v[d]){
    if(!vis[x]){
      int nc = c == 1 ? 2 : 1;
      DFS(x,nc);
    }
    else if(vis[x] == vis[d]) cyc=1;
  }
}
void init(){
    for(int i =0;i<2003;i++){
        v[i].clear();
    }
    fill(vis,vis+2003,0);
    cyc=0;
}
int main()
{
    scanf("%d",&t);
   for(int i=1;i<=t;i++){
      init();
      scanf("%d%d",&n,&m);
      for(int j=0;j<m;j++){
        scanf("%d%d",&g,&h);
        v[g].push_back(h);
        v[h].push_back(g);
      }
      for(int i=1;i<=n;i++){
        if(!vis[i]) DFS(i,1);
      }
      printf("Scenario #%d:\n",i);
      puts(cyc?"Suspicious bugs found!\n":"No suspicious bugs found!\n");
    }
    return 0;
}
