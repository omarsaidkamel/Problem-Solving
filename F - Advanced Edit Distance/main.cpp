#include <iostream>
using namespace std;
int x,y;string s,d;
int solve(int i,int j){
  if(i == x || j == y) return max(x-i,y-j);
  int mo = 1001,rep = 1001,ins = 1001,del = 1001;
  if(s[i] == d[j]) mo = solve(i+1,j+1);
    ins = solve(i,j+1) + 1;
    del = solve(i+1,j) + 1;
    if(s[i] == d[j+1] && s[i+1] == d[j]) rep = solve(i+2,j+2) + 1;
    return min(min(mo,ins),min(del,rep));
}
int main()
{
    while(cin>>s>>d,s[0]!='*'&&d[0]!='*'){
       x = s.size();y = d.size();
       printf("%d\n",solve(0,0));
    }
    return 0;
}
