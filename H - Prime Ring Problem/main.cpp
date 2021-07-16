#include <bits/stdc++.h>
using namespace std;
int p,n;vector<int>v;bool A[20];
bool isprime(int n){
  for(int i = 2;i <= n/2;i++){
    if(n%i==0)return false;
  }
  return true;
}

void solve(int x){
  if(v.size() == n){
    if(isprime(v[0]+v[n-1])){
            printf("1");
        for(int i=1;i<n;i++){
            printf(" %d",v[i]);
        }
        printf("\n");
    }
    return;
  }
  for(int i=2;i<=n;i++){
    if(isprime(i+x) && !A[i]){
       v.push_back(i);
       A[i]=1;
       solve(i);
       v.pop_back();
       A[i]=0;
    }
  }
}
int main()
{
    while(scanf("%d",&n)!= EOF){
      A[20]={0};
      if(p++)putchar('\n');
      printf("Case %d:\n",p);
      v.push_back(1);
      solve(1);
      v.clear();
    }
    return 0;
}
