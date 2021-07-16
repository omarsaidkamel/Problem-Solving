#include <bits/stdc++.h>
using namespace std;
int sR,sC,eR,eC,line[101],l,dis[102][100002],XR[]{1,-1,0,0},XC[]{0,0,1,-1};
bool isvalid(int r,int c){
return line[r] + 1 >= c && c > 0 && r > 0 && r <= l;
}
void BFS(int R,int C){
   queue<pair<int,int>>q;
   memset(dis,-1,sizeof dis);
   dis[R][C]=0;
   q.push({R,C});
   while(!q.empty()){
    pair<int,int> X = q.front();
   //cout<<"P = "<<X.first<<" "<<X.second<<"\n";
    q.pop();
    for(int i=0;i<4;i++){
      int r = X.first + XR[i];
      int c = X.second + XC[i];
      if(i == 0||i == 1)c = min(c,line[r]+1);
    //cout<<"    c = "<<r<<" "<<c<<"\n";
      if(isvalid(r,c) && dis[r][c] == -1){
        dis[r][c] = dis[X.first][X.second] + 1;
        q.push({r,c});
        if(r == eR &&c == eC)return;
      }
    }
   }
}
int main()
{
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    scanf("%d",&l);
    for(int i=1;i<=l;i++) scanf("%d",&line[i]);
    scanf("%d%d%d%d",&sR,&sC,&eR,&eC);
    BFS(sR,sC);printf("%d",dis[eR][eC]);
    return 0;
}
