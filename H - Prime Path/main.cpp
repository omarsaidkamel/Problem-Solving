#include <bits/stdc++.h>
using namespace std;
int x,t,S,E,A[1090],dis[10000];//1062
bool isprime(int n){
     for(int i=2;i<n;i++){
        if(n%i==0) return false;
     }
     return true;
}
void PF(){
  for(int i=1000;i<=9999;i++){
    if(isprime(i)) A[x++]=i;
  }
}
bool onediff(int r,int c){
    int z = 0;
    while(r){
        if(r%10 != c%10) z++;
        r/=10;c/=10;
    }
    if(z == 1)return true;
    return false;
}
void BFS(int u){
  queue<int>q;
  memset(dis,-1,sizeof dis);
  dis[u] = 0;
  q.push(u);
  while(!q.empty()){
    int y = q.front();
    q.pop();
    for(int i=0;i<x;i++){
        if(onediff(y,A[i])&& dis[A[i]]== -1){
            dis[A[i]] = dis[y] + 1;
            q.push(A[i]);
        }
    }
  }
}
int main()
{
    PF();
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&S,&E);
        BFS(S);
        printf("%d\n",dis[E]);
    }
    return 0;
}
