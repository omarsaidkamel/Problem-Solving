#include <bits/stdc++.h>
using namespace std;
pair<int,int> p[21];
int sum ,n,m,x,y;
bool cmp(pair<int,int>p,pair<int,int>h){
    if(p.second < h.second) return false;
    return true;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 0 ; i < m ; i++){
        scanf("%d%d",&x,&y);
        p[i].first = x;
        p[i].second = y;

    }
    sort(p,p+m,cmp);
    for(int i = 0 ; i < m ; i++){
       int b = p[i].first;
       int a = p[i].second;
         if(b <= n){
           n -= b;
           sum += b * a;
         }
         else if(b >= n){
            sum += n * a;
            n = 0;
         }
         if(n == 0) break;
     }
     printf("%d",sum);
    return 0;
}
