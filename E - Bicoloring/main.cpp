#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int>v[202];queue<int>q;int n,m,a,b,color[202];bool WR;
void BFS(int u,int c){
    color[u] = c;
    q.push(u);
    while(!q.empty()){
      int x = q.front();
      q.pop();
      c = color[x] == 1 ? 2 : 1;
      for(int z : v[x]){
         if(!color[z]) {q.push(z);color[z]=c;}
         else if(color[z] == color[x]) WR=1;
      }
    }
}
void init(){
  for(int i=0;i<=n;i++) v[i].clear();
  fill(color,color+n+1,0);WR=0;
}
int main()
{
    while(scanf("%d",&n),n){init();
        scanf("%d",&m);
        for(int i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        BFS(0,1);
        puts( WR ? "NOT BICOLORABLE.":"BICOLORABLE.");
    }
    return 0;
}
