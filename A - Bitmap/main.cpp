#include <bits/stdc++.h>
using namespace std;
char c;int t,n,m,ans[585][585],R[]={0,0,-1,1},C[]={1,-1,0,0};
bool isvalid(int aa,int bb){
 return (aa >= 0 && aa < n && bb >= 0 && bb < m);
}
void BFS(int a,int b){
   queue<pair<int,int>>q;
   ans[a][b] = 0;
   q.push({a,b});
   while(!q.empty()){
    int r = q.front().first;
    int c = q.front().second;
    q.pop();
    for(int i = 0; i < 4; i++){
        int o = r + R[i];
        int p = c + C[i];
        if((ans[o][p] == -1 && isvalid(o,p)) || ans[o][p] > ans[r][c] + 1){
          ans[o][p] = ans[r][c] + 1;
          q.push({o,p});
        }
    }
   }
}
int main()
{
    scanf("%d",&t);
    while(t--){
       vector<pair<int,int>>p;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
           cin>>c;
            if(c == '1') p.push_back({i,j});
          }
        }
         memset(ans,-1,sizeof ans);
         int ee =p.size();
        for(int i=0;i<ee;i++){
           BFS(p[i].first,p[i].second);
        }
        for(int i=0;i<ee;i++){
           ans[p[i].first][p[i].second]= 0;
        }
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            printf("%d ",ans[i][j]);
          }
          puts("");
        }
    }
    return 0;
}
