#include <bits/stdc++.h>
using namespace std;
int n,m;pair<int,int> A[10002];
int boss(int u){
   return A[u].first = (A[u].first == u ? u : boss(A[u].first)) ;
}

bool are_Friends(int x,int y){
    return(boss(x) == boss(y)? 1 : 0);
}

bool are_Enemies(int x,int y){
    x = boss(x);y = boss(y);
    return(A[x].second == y ? 1 : 0);
}

void make_Friends(int x,int y){
    if(are_Enemies(x,y))puts("-1");
    else {
       x = boss(x); y = boss(y);
       if(boss(A[x].second) > boss(A[y].second)){
         A[y].first = x;
         A[y].second = A[x].second;
       }
       else{
         A[x].first = y;
         A[x].second = A[y].second;
       }
    }
}

void make_Enemies(int x,int y){
    if(are_Friends(x,y))puts("-1");
    else {
        x = boss(x); y = boss(y);
        make_Friends(y,A[x].second);
        make_Friends(A[y].second,x);
        A[x].second = A[y].first;
        A[y].second = A[x].first;
    }
}
int main()
{
    int q,a,b;
    while(scanf("%d",&n) == 1){
        for(int i=0;i<n;i++){
            A[i].first = i;
            A[i].second = -1;
        }
        while(scanf("%d%d%d",&q,&a,&b) == 3){
            if(q == 0 && a == 0 && b == 0)  break;
            if(q == 1) make_Friends(a,b);
            if(q == 2) make_Enemies(a,b);
            if(q == 3) puts(are_Friends(a,b) == 1 ? "1" : "0");
            if(q == 4) puts(are_Enemies(a,b) == 1 ? "1" : "0");

        }
    }
    return 0;
}
