#include <bits/stdc++.h>
using namespace std;
int a[(int)1e6+3],x;
int GCD(int n, int m){
  if(m == 0) return n;
  return GCD( m , n % m );
}
void divisors(int n){
    int i;
   for(i = 2 ; i * i < n; i++){
     if(n % i == 0){
        a[x] = i; x++;
        a[x] = n/i;x++;
     }
   }
     if( i * i  == n){a[x] = i;x++;}
}
int main()
{
    int n,m,b,l,h;
    scanf("%d%d%d",&n,&m,&b);
    int v = GCD(n,m);
    divisors(v);
    sort(a,a+x);
    while(b--){
            bool o = true;
        scanf("%d%d",&l,&h);
        if(v >= l && v <= h ){printf("%d\n",v);continue;}
        for(int i = x-1 ; i >= 0 ; i--){
              int* g = lower_bound(a,a+x,a[i]);
           if(*g>= l && *g <= h){
                printf("%d\n",*g);
                o = false;
                break;
            }
        }

        if(o){
           if(l == 1)  printf("1\n");
           else  printf("-1\n");
        }
    }
    return 0;
}
