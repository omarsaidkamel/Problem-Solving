#include <bits/stdc++.h>
using namespace std;
char st[3],en[3];
int dis[8][8],rs,re,cs,ce,t,Ar[]={-2,-2,-1,1,1,-1,2,2},Ac[]={-1,1,2,2,-2,-2,-1,1};
void BFS(int nrs,int ncs){
   queue<pair<int,int>>q;
   memset(dis,-1,sizeof dis);
   dis[nrs][ncs] = 0;
   q.push({nrs,ncs});
   while(!q.empty()){
    int r = q.front().first;
    int c = q.front().second;
    q.pop();
    for(int i=0;i<8;i++){
        int x = r + Ar[i];
        int y = c + Ac[i];
        if(x >= 0 && x < 8 && y >= 0 && y < 8 && dis[x][y] == -1){
            dis[x][y] = dis[r][c] + 1;
            if(re==x && ce == y) return;
            q.push({x,y});
        }
    }
   }
}
int main()
{

    scanf("%d",&t);
    while(t--){
        cin>>st>>en;
        rs= st[0] - 'a';re = en[0] - 'a';
        ce = en[1] - '1';cs = st[1] - '1';
        BFS(rs,cs);
        printf("%d\n",dis[re][ce]);
    }
    return 0;
}
