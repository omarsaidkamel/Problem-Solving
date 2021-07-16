#include <bits/stdc++.h>
using namespace std;
int total,j,n,A[1005],l;bool getsum;
vector <int> v; vector <string> vx;
void solve(int sum,int i){
  if(sum == 0){
      string s;getsum = true;
    for(int i = 0;i < v.size();i++) s += v[i] + '0';
    for(int i = 0;i < vx.size();i++){
        if(vx[i]==s)return;
    }
    for(int i = 0;i < v.size();i++){
        if(v.size()-1 == i) cout<<v[i]<<"\n";
        else cout<<v[i]<<"+";
    }
  vx.push_back(s);
  return;
  }
  if(i==n)return;
  //taken
     v.push_back(A[i]);
     solve(sum - A[i],i+1);
     v.pop_back();
  //leave
    solve(sum,i+1);
}
int main()
{
    while(scanf("%d%d",&total,&n) && total && n){
      for(int i=0;i<n;i++)scanf("%d",A+i);
      getsum = l = 0;
      printf("Sums of %d:\n",total);
      solve(total,l);
      if(!getsum)puts("NONE");
    }
    return 0;
}
