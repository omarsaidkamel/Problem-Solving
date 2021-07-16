#include <bits/stdc++.h>
using namespace std;
int n,A[20],o;
vector<int>v;
void solve(int i){
  if(v.size()==6){
     for(int i=0;i<5;i++){
        printf("%d ",v[i]);
     }
        printf("%d",v[5]);puts("");return;
  }
  if(i==n)return;
  v.push_back(A[i]);
  solve(i+1);
  v.pop_back();
  solve(i+1);
}
int main()
{
    while(scanf("%d",&n)&&n){
        if (o++)puts("");
        for(int i=0;i<n;i++)scanf("%d",A+i);
        solve(0);
    }
    return 0;
}
