#include <iostream>
#include <vector>
using namespace std;
vector<int> v[100004];
int n,c,A[100002],x,y,r;bool vis[100002];
void DFS(int x,int cc){
  vis[x]=1;int s=0;
  if(cc>c) return;
  for(int h : v[x]){
    if(!vis[h]){
      if(A[h]) DFS(h,cc+1);
      else DFS(h,0);
      s=1;
    }
  }
   if(!s) r++;
}
int main()
{
    scanf("%d%d",&n,&c);
    for(int i=1;i<=n;i++) scanf("%d",A+i);
     for(int i=1;i<=n-1;i++){
        scanf("%d%d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1,A[1]);
    printf("%d",r);
    return 0;
}
