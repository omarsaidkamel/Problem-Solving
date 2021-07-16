#include <iostream>
using namespace std;
int p[1700],x , a[1050], h ;
void primes(int n){
  for(int i = 2 ; i <= n ; i++ ){
        bool b = true;
     for(int j = 2 ; j * j <= n ; j++ ){
        if(i % j == 0 && i != j) b = false;
     }
     if(b) {p[x] = i; x++;}
  }
}
void luckynum(){
  for(int i = 30 ; i < 3500 ; i++ ){
        int c = 0 ;
       for(int j = 0 ; j < x ; j++ ){
         if(i % p[j] == 0) c++;
       }
       if(c >= 3) {a[h] = i; h++;}
    }
}
int main()
{
    primes(10000);
    luckynum();
    int t,n;
    scanf("%d",&t);
    for(int i = 0 ; i < t ; i++ ){
        scanf("%d",&n);
        printf("%d\n",a[n-1]);
    }
        return 0;
}
