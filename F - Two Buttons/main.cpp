#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int>v[10000002];queue<int>q;int n,m,dis[10000002];bool vis[10000002];
void BFS(int u){
  vis[u]=1;dis[u]=0;
  q.push(u);
  while(!q.empty()){
    int x = q.front();
    q.pop();
    for(int z : v[x]){
        if(!vis[z]){q.push(z);vis[z]=1;dis[z] = dis[x]+1;}
    }
  }
}
int main()
{
    scanf("%d%d",&n,&m);
    int y = max(n,m);
    for(int i=1;i<=y*2;i++){
      if(i - 1 > 0 ) v[i].push_back(i-1);
      if(i * 2 <= y*2) v[i].push_back(i*2);
    }
    BFS(n);printf("%d",dis[m]);
    return 0;
}
