#include <iostream>
#include <vector>
using namespace std;
int n,t,x,y;bool vis[90005],f;vector<int>X[90005];
void DFS(int x){
  vis[x]=1;
  if(x==t)f=1;
  for(int z : X[x]){
    if(!vis[z]) DFS(z);
  }
}
int main()
{
    scanf("%d%d",&n,&t);
    for(int i=1;i<n;i++){
        scanf("%d",&x);
        X[i].push_back(i+x);
    }
    DFS(1);
    puts(f==0?"NO":"YES");
    return 0;
}
