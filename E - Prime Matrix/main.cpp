#include <iostream>
#include<algorithm>
using namespace std;
int p[100009],x;
void primes(int n){
   for(int i = 2; i <= n ; i++  ){
        bool b = true;
       for(int j = 2; j * j <= n ; j++  ){
         if(i % j == 0 && i != j) b = false;
       }
       if(b){p[x] = i;x++;}
    }
}
int main()
{
    int n,sum,m,mini=100006,a[509][509];
    primes(100009);
    scanf("%d%d",&n,&m);
    for(int i = 1; i <= n ; i++  ){
        sum =0;
       for(int j = 1; j <= m ; j++  ){
        scanf("%d",&a[i][j]);
        sum += *lower_bound(p,p+x,a[i][j]) - a[i][j];
       }
       mini = min(sum,mini);
    }
    for(int i = 1; i <= m ; i++  ){
        sum =0;
       for(int j = 1; j <= n ; j++  ){
        sum += *lower_bound(p,p+x,a[j][i]) - a[j][i];
       }
       mini = min(sum,mini);
    }
    printf("%d",mini);
    return 0;
}
