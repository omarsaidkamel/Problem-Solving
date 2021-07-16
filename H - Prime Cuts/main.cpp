#include <iostream>
using namespace std;
int p[1001],x;
void arr_primes(int n){
 for(int i = 1;i <= n; i++ ){
    bool b = true;
    for(int j = 2;j * j <= i; j++ ){
        if(i % j ==0 && i != j) {b = false;break;}
    }
    if(b)p[x++] = i;
 }
}
int main()
{
    arr_primes(1001); int n, c, i, j;
    while(scanf("%d%d",&n,&c) == 2){
       printf("%d %d:", n, c);
        int li[1001], lt = 0;
        for(i = 0; i < x; i++) {
            if(p[i] <= n) li[lt++] = p[i];
            else break;
        }
        if( lt % 2 == 1 )  c = c*2-1;
        else c *=2;
        if(c > lt)  c = lt;
             i = lt/2-c/2;
        for(j = 0; j < c; j++) printf(" %d", li[i++]);
        puts("\n");
    }
    return 0;
}
