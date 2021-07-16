#include <iostream>
#include <vector>
using namespace std;
vector<int>A[10002];
bool vis[10002];int c;
void DFS(int n){
    vis[n]=1;c++;
    for(int x : A[n]){
      if(!vis[x]) DFS(x);
    }
}
int main()
{
    int n,m,a,b;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++){
       scanf("%d%d",&a,&b);
       A[a].push_back(b);
       A[b].push_back(a);
    }
    if(n-1 != m){
        puts("NO");
        return 0;
    }DFS(1);
    puts(c==n?"YES":"NO");
    return 0;
}
