#include <iostream>
#include <vector>
using namespace std;
vector<int>v[2002];/*bool vis[2002];*/int mx;
void DFS(int u,int d){
   //vis[u]=1;
   mx = max(mx,d);
   for(int x : v[u]){
    //if(!vis[x]){
        DFS(x,d+1);
    //}
   }
}
int main()
{
    int n,m;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       scanf("%d",&m);
       if(m != -1)
       v[m].push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
      // if(!vis[i])
        DFS(i,1);
    }
    printf("%d",mx);
    return 0;
}
