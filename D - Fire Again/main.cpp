#include<bits/stdc++.h>
using namespace std;
int n,m,t,a,b,dis[2005][2005],mxr,mxc,mx,XR[]={1,-1,0,0},XC[]={0,0,1,-1};
vector<pair<int,int>>v;
bool isvalid(int r,int c){
  return (r > 0 && c > 0 && r <= n && c <= m);
}
void BFS(int R ,int C){
  queue<pair<int,int>>q;
  dis[R][C]=0;
  q.push({R,C});
  while(!q.empty()){
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for(int i = 0; i < 4;i++){
        int r = x + XR[i];
        int c = y + XC[i];
        if((dis[r][c] == -1 && isvalid(r,c) )  || dis[r][c] > dis[x][y] + 1){
            dis[r][c] = dis[x][y] + 1;
            q.push({r,c});
        }
    }
  }
}
int main(){
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
   scanf("%d%d%d",&n,&m,&t);
   for(int i=0;i<t;i++){
    scanf("%d%d",&a,&b);
    v.push_back({a,b});
   }
   memset(dis,-1,sizeof dis);
   for(int i=0;i<t;i++){
     BFS(v[i].first,v[i].second);
   }
   for(int i=0;i<t;i++){
    dis[v[i].first][v[i].second] = 0;
   }
   for(int i=1;i<=n;i++){
     for(int j=1;j<=m;j++){
      if(mx <= dis[i][j]){
        mx=dis[i][j];mxr=i;mxc=j;
      }
     }
   }
   printf("%d %d",mxr,mxc);
   return 0;
}
