#include <bits/stdc++.h>
using namespace std;
int n,mem[1005][1005];string s;
int solve(int i,int j){
   if(i == j)return 1;
   if(i > j)return 0;
   if(mem[i][j] != -1) return mem[i][j];
   int op1 = -1,op2 = -1,op3 = -1;
   if(s[i] == s[j]) op1 = solve(i+1,j-1) + 2;
   else {
    op2 = solve(i+1,j);
    op3 = solve(i,j-1);
   }
   return mem[i][j] = max(op1,max(op2,op3));
}
int main()
{
    scanf("%d",&n);cin.ignore();
    while(n--){getline(cin,s);memset(mem,-1,sizeof mem);
      printf("%d\n",solve(0,s.size()-1));
    }
    return 0;
}
