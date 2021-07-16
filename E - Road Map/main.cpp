#include <iostream>
#include <vector>
using namespace std;
vector<int>v[50004];int A[50004];
void DFS(int u,int p){
  for(int x : v[u]){
    if(x!=p){
       DFS(x,u);
       A[x]=u;
    }
  }
}
int main()
{
    int n,oc,nc,u;
    scanf("%d%d%d",&n,&oc,&nc);
    for(int i=1;i<=n-1;i++){
        scanf("%d",&u);
        if(i>=oc){
          v[i+1].push_back(u);
          v[u].push_back(i+1);
        }
        if(i<oc){
          v[i].push_back(u);
          v[u].push_back(i);
        }
    }
    DFS(nc,-1);
    for(int i=1;i<=n;i++){
        if(i!=nc)cout<<A[i]<<" ";
    }
    return 0;
}
