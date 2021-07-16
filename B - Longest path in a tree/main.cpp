#include <iostream>
#include <vector>
using namespace std;
vector<int>v[10002];int n,x,y,c,nod,mx;
void DFS(int u,int p){
 if(mx<c) {
    mx=c;
    nod=u;
 }
 for(int x : v[u]){
    if(x!=p) {
      c++;
      DFS(x,u);
    }
 }
 c--;
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        scanf("%d%d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1,-1);mx=0;c=0;
    DFS(nod,-1);
    printf("%d",mx);
    return 0;
}
