#include <iostream>
#include <vector>
using namespace std;
vector<pair<int,int>>vec[50006];
int n,m,u,v,t,a,c,mx,nod;
void DFS(int x,int p){
  if(mx<c){
    mx=c;
    nod=x;
  }
  for(pair<int ,int> y : vec[x]){
      int a = y.second;
      c+=a;
      if(y.first != p)DFS(y.first,x);
      c-=a;
  }
}
void inti(){
  for(int i=1;i<=n;i++){
    vec[i].clear();
  }
  mx=0,c=0;nod=0;
}
int main()
{
    scanf("%d",&t);
    while(t--){inti();
        scanf("%d",&n);
        for(int i=0;i<n-1;i++){
           scanf("%d%d%d",&u,&v,&m);
           vec[u].push_back({v,m});
           vec[v].push_back({u,m});
        }
        DFS(1,-1);mx=0,c=0;
        DFS(nod,-1);
        printf("%d\n",mx);
    }
    return 0;
}
