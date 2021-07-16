#include <iostream>
#include <vector>
using namespace std;
int n,m,a,b; vector<int>v[101],B;bool vis[101];
void DFS(int u){
    vis[u]=1;
  for(int x: v[u]){
    if(!vis[x]) DFS(x);
  }
  B.push_back(u);
}
void init(){
  for(int i=1;i<=n;i++) v[i].clear();
  B.clear();fill(vis,vis+n+1,0);
}
int main()
{
    while(scanf("%d%d",&n,&m),n||m){
        init();
        for(int i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
        }
        for(int i=1;i<=n;i++){
          if(!vis[i])
          DFS(i);
        }

      for(int i=B.size()-1;i>=0;i--){
         if(i==0) cout<<B[i];
         else cout<<B[i]<<" ";
      }
      puts("");
    }
    return 0;
}
