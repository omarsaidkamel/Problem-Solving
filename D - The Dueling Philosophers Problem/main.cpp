#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int>v[1002];queue<int>q;
int n,m,a,b,w,root[1001];bool tx;
void BFS(){
   while(!q.empty()){
        if(q.size() > 1) tx = 1;
      int x = q.front();w++;
      q.pop();
      for(int z : v[x]){
        if(--root[z] == 0)
        q.push(z);
      }
   }
}
void init(){
    for(int i=1;i<=n;i++) v[i].clear();
    fill(root,root+n+1,0);w=0;tx=0;
}
int main()
{
    while(scanf("%d%d",&n,&m), m || n){init();
        for(int i=0;i<m;i++){
          scanf("%d%d",&a,&b);
          ++root[b];
          v[a].push_back(b);
        }
        for(int i = 1; i <= n; i++){
          if(root[i] == 0) q.push(i);
        }
        BFS();
      if(w!=n)puts("0");
      else puts( tx ? "2" : "1");
    }
    return 0;
}
