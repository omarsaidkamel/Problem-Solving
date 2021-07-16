#include <bits/stdc++.h>
using namespace std;
int n,m,u,v,p,x,y,s,c;bool f,vis[102],rood[101];
vector<pair<int,int>>graph[101];
void DFS(int u,int o){
    vis[u] = 1;
    for(pair<int,int> h : graph[u]){
        if(h.first == y && h.second == o){
           c++;  f=0;
         }
         if(!f)return;
        if(h.second == o && !vis[h.first]) DFS(h.first,h.second);
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 0; i < m; i++){
        scanf("%d %d %d",&u,&v,&p);
        graph[v].push_back({u,p});
        graph[u].push_back({v,p});
    }
    scanf("%d",&s);
    for(int i = 0; i < s; i++){
       scanf("%d%d",&x,&y);c=0;
       for(pair<int,int> g : graph[x]){
        memset(vis,0,sizeof vis);f=1;
         if(!rood[g.second])DFS(x,g.second);
         rood[g.second] = 1;
       }
        memset(rood,0,sizeof rood);
       printf("%d\n",c);
    }
    return 0;
}
