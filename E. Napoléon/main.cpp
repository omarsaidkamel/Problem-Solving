#include <bits/stdc++.h>
using namespace std;
int t,n,sx,sy,ex,ey,dis[21][21];bool zz;
int MOVEX[]={1,1,-1,-1}, MOVEY[]={1,-1,1,-1};
void BFS(int x,int y){
    queue<pair<int,int>>q;
    memset(dis,-1,sizeof dis);
    dis[x][y] = 0;
    q.push({x,y});
    while(!q.empty()){
      int r = q.front().first;
      int c = q.front().second;
      q.pop();
      for(int i=0;i<4;i++){
        int a = r + MOVEX[i],b = c + MOVEY[i];
        if(dis[a][b] == -1 && a >= 0 && a < n &&  b >= 0 && b < n ){
            dis[a][b] = dis[r][c] + 1;
            if(a == ex && b == ey) {printf("%d\n",dis[a][b]);zz=0;}
            q.push({a,b});
        }
      }
    }
}
int main()
{
    scanf("%d%d",&t,&n);
    while(t--){
        scanf("%d%d%d%d",&sx,&sy,&ex,&ey);zz=1;
        if(sx == ex && sy == ey) {puts("0");zz=0;continue;}
        BFS(sx,sy);
        if(zz)puts("can't reach!");
    }
    return 0;
}
