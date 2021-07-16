#include <iostream>
#include <vector>
using namespace std;
vector<int>v[1000002],ans;int n,m,u,c,vis[1000004];bool cyc;
void DFS(int x){
  vis[x]=1;
  for(int r : v[x]){
    if(!vis[r]) DFS(r);
    else if(vis[r] == 1)cyc=true;
  }
  vis[x]=2;
  ans.push_back(x);
}
void init(){
 for(int i=0;i<=n;i++)v[i].clear();
 fill(vis,vis+n+1,0);cyc =0;ans.clear();
}
int main()
{
    while(scanf("%d%d",&n,&m),n||m){
        init();
        for(int i=0;i<m;i++){
          scanf("%d%d",&u,&c);
          v[u].push_back(c);
        }
        for(int i=1;i<=n;i++){
           if(!vis[i])DFS(i);
        }
        if(cyc) {puts("IMPOSSIBLE");continue;}
        for(int i=ans.size()-1;i>=0;i--){
           printf("%d\n",ans[i]);
        }
    }
    return 0;
}
