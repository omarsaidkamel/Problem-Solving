#include <bits/stdc++.h>
using namespace std;
int t,a,b,n,m,c;bool vis[50003];vector<int>vec[50003];
void BFS(int u){
 queue<int>q;
 q.push(u);
 vis[u] = 1;
 while(!q.empty()){
   int x = q.front();
   q.pop();
   for(int z : vec[x]){
     if(!vis[z]){
       vis[z] = 1;
       q.push(z);
     }
   }
 }
}
void init(){
 for(int i=1;i<=n;i++){
    vec[i].clear();
    vis[i] = 0;
 }c=0;
}
int main()
{
    while(scanf("%d%d",&n,&m), n || m){
        init();t++;
        for(int i=0;i<m;i++){
           scanf("%d%d",&a,&b);
           vec[a].push_back(b);
           vec[b].push_back(a);
        }
        for(int i=1;i<=n;i++){
          if(!vis[i]){
            BFS(i);c++;
          }
        }
        printf("Case %d: %d\n",t,c);
    }
    return 0;
}
