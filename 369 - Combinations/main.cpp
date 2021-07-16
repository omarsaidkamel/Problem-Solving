#include <iostream>
using namespace std;
long long int  C[109][109];
void pascal(){
  for(int r = 1;r <= 100;r++){
    for(int c = 1; c <= r  ; c++){
        if(c == 1 || c == r ) C[r][c] = 1;
        else C[r][c] = C[r - 1][c] + C[r - 1][c - 1];
      //cout<<C[r][c]<<" ";
    }
    //puts("");
  }
}
int main()
{
    int n,m;
    pascal();
    while(scanf("%d %d", &n, &m)) {
      if(!n && !m) break;
      printf("%d things taken %d at a time is %lld exactly.\n", n, m, C[n][m]);
    }
    return 0;
}
