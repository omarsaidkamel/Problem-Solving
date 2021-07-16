#include <bits/stdc++.h>
using namespace std;
int q,n,d,a,v,p,A[1000002];
int main()
{
    scanf("%d",&q);
    while(q--){
    map<int ,int> MAP;
      scanf("%d%d",&n,&a);
      for(int i=0;i<n;i++){
        scanf("%d",A+i);
        if(A[i]){
          if(MAP.find(A[i])== MAP.end()) MAP.insert({A[i],1});
          else MAP[A[i]] += 1;
        }
      }
      while(a--){
        scanf("%d",&d);
        if(d == 1){
         scanf("%d%d",&p,&v);
           if(A[p-1]){ MAP[A[p-1]]--;
                  if(MAP[A[p-1]] == 0) MAP.erase(A[p-1]);
                }
           if(MAP.find(v) == MAP.end()&& v) MAP.insert({v,1});
           else if(MAP.find(v) != MAP.end()) MAP[v]++;
         A[p-1] = v;
        }
        else  cout<<MAP.size()<<"\n";
      }
    }
    return 0;
}
