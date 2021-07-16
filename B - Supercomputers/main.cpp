#include <iostream>
#include <vector>
using namespace std;
vector<int>v[200000];
int n,h,A[200000],t,r;
void DFS(int u,int mx){
   for(int x: v[u]){
      h = max(h , mx-A[x]);
      if(mx < A[x])  DFS(x,A[x]);
      else DFS(x,mx);
   }
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&A[i]);
    for(int i=1;i<=n;i++){
       scanf("%d",&t);
       if(t != -1) v[t].push_back(i);
       else r = i;
    }
    DFS(r,A[r]);printf("%d",h);
    return 0;
}
