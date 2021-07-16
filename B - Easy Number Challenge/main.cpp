#include <iostream>
using namespace std;
int a[(int)1e6+2];
long long d(int n){
 if(a[n]!=0) return a[n];
    int c=0;
  for (int  i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			 if (i * i != n) c++;
         c++;
		}
	}
	if(a[c]==0) a[n]=c;
  return c;
}
int main()
{
    int a,b,c;long long sum = 0,MOD = 1073741824;
    scanf("%d%d%d",&a,&b,&c);
     for(int i = 1; i <= a ; i++){
       for(int j = 1 ; j <= b ; j++){
         for(int k = 1 ; k <= c ; k++){
           sum+=d(i*j*k);
         }
       }
     }
     printf("%lld",sum % MOD);
    return 0;
}
