#include <iostream>
using namespace std;
int A[31],n,p;bool flag;
void solve(int x,int e){
    if(x == 0) {flag = 0;return;}
    if(0 > e || !flag) return;
    solve(x-A[e],e-1);
    solve(x,e-1);
}
int main()
{
    while(scanf("%d",&n) == 1){
      for(int i=0;i<n;i++) scanf("%d",A + i);
      flag=true;p++;printf("Case #%d:",p);
      for(int i=0;i<n;i++) printf(" %d",A[i]);puts("");
      for(int i=2;i<n;i++){
        solve(A[i],i-1);
        if(!flag) {puts("This is not an A-sequence.");break;}
      }
      if(flag) puts("This is an A-sequence.");
    }
    return 0;
}
