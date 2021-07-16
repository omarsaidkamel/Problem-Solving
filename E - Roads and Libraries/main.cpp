#include <iostream>
#include <vector>
#include <queue>
using namespace std;
long long n,m,lib,rd,t,v,u,ans;vector<int>vec[1000005];bool vis[1000005];
void BFS(int u){
  queue<int>q;
  q.push(u);
  vis[u] = 1;
  while(!q.empty()){
   int x = q.front();
   q.pop();
   for(int z : vec[x]){
    if(!vis[z]){
        q.push(z);
        vis[z] = 1;
        ans += rd;
    }
   }
  }
}
void init(){
    for(int i=1;i<=n+1;i++){
      vec[i].clear();
      vis[i]=0;
    }
    ans=0;
}
int main()
{
    scanf("%d",&t);
    while(t--){
        cin>>n>>m>>lib>>rd;
        init();
        for(int i=0;i<m;i++){
            scanf("%d %d",&u,&v);
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
          if(!vis[i]) {
            ans+=lib;BFS(i);
          }
        }
        if(lib <= rd) cout<<n*lib<<"\n";
        else cout<<ans<<"\n";
    }
    return 0;
}
