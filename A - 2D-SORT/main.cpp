#include <iostream>
#include <algorithm>
using namespace std;
pair<int ,int>p[100009];
bool sorted(pair<int ,int>p,pair<int ,int>pl){
  if(p.first>pl.first||
     p.first==pl.first&&
     p.second<pl.second)
  return false;
  else
    return true;
}
int main()
{
    int t,n,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
         for(int i=0;i<n;i++){
          scanf("%d%d",&x,&y);
           p[i].first=x;
           p[i].second=y;
         }
         sort(p,p+n,sorted);
         for(int i=0;i<n;i++){
               x=p[i].first;
               y=p[i].second;
              printf("%d %d\n",x,y);
         }
    }
    return 0;
}
