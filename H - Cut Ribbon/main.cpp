#include<bits/stdc++.h>
using namespace std;
int a,b,c,n;
int solve(int n){
int p=-1e9+5;
if(n<=0)return 0;
if(n-a>=0) p=max(solve(n-a)+1,p);
if(n-b>=0) p=max(solve(n-b)+1,p);
if(n-c>=0) p=max(solve(n-c)+1,p);
return p;
}
int main(){
cin>>n>>a>>b>>c;
int r=solve(n);
if(n<11`    10)cout<<r;
else cout<<0;
return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
int n,a,b,c,f,memo[(int)4e3+7];
int solve(int k)
{
    int t=-1e9+6;
    if(memo[k]!=-1) return memo[k];
    if(k<=0) return 0;
    if(k-a>=0&&a!=0)  t=max(solve(k-a)+1,t);
    if(k-b>=0&&b!=0)  t=max(solve(k-b)+1,t);
    if(k-c>=0&&c!=0)  t=max(solve(k-c)+1,t);
    return memo[k]=t;
}
int main()
{
    memset(memo,-1,sizeof(memo));
    cin>>n>>a>>b>>c;
    int r=solve(n);
    if(r>0) cout<<solve(n);
    else cout<<0;
    return 0;
}
// 6 1 2 3*/
