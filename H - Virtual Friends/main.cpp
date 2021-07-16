#include <bits/stdc++.h>
using namespace std;
int t,n,parint[200002],val[200002];string s,d;
int getleader(int u){
    if(parint[u] == u)return u;
    return parint[u] = getleader(parint[u]);
}
void makefrind(int u,int v){
    u = getleader(u);
    v = getleader(v);
    if(u!=v){
     parint[u] = v;
     val[v] += val[u];
    }
}
void init (){
    fill(val,val+n,1);
    iota(parint,parint+n,0);
}
int main()
{
    scanf("%d",&t);
    while(t--){
        map<string,int>M;
        scanf("%d",&n);int x=1;init();
        for(int i = 0; i < n; i++){
            cin>>s>>d;
            if(M[s] == 0){
                M[s] = x;x++;
            }
            if(M[d] == 0){
                M[d] = x;x++;
            }
            makefrind(M[s],M[d]);
            cout<<val[getleader(M[s])]<<"\n";
        }
    }
    return 0;
}
