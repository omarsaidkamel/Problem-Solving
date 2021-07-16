#include <bits/stdc++.h>
using namespace std;
string word[102],pass;int n,m;
vector<string> v;
void Solve(int l){
  if(l == pass.size()){
    for(int i=0;i<v.size();i++)cout<<v[i];
    puts("");
    return;
  }
  if(pass[l]=='#'){
    for(int i=0;i<n;i++){
       v.push_back(word[i]);
       Solve(l+1);
       v.pop_back();
    }
  }
  if(pass[l]=='0'){
    for(int i=0;i<10;i++){
       v.push_back(to_string(i));
       Solve(l+1);
       v.pop_back();
    }
  }
 // return;
}
int main()
{
    while(scanf("%d", &n) == 1){
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
        for(int i=0;i<n;i++) cin>>word[i];
        puts("--");
        scanf("%d",&m);
        for(int i=0;i<m;i++){
        cin>>pass; Solve(0);
        }
    }
    return 0;
}
