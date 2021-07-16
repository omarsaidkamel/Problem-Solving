#include <bits/stdc++.h>
using namespace std;
int n,x,y,mem[2001][2001];string s,d;
int solve(int i ,int j){
    if(i == x || j == y) return max(x-i,y-j);
    int del = 2001,ins = 2001 ,rep = 2001,mov = 2001;
    if(mem[i][j] != -1) return mem[i][j];
    if(s[i] == d[j]) mov = solve(i+1,j+1);
      del = solve(i+1,j) + 1;
      ins = solve(i,j+1) + 1;
      rep = solve(i+1,j+1) + 1;
    return mem[i][j] = min(min(mov,del),min(ins,rep));
}
int main()
{
    scanf("%d",&n);
    while(n--){memset(mem,-1,sizeof mem);
      cin>>s>>d;x = s.size();y = d.size();
      printf("%d\n",solve(0,0));
    }
    return 0;
}
