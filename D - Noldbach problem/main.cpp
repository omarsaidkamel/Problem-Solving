#include <iostream>
using namespace std;
int a[1008],x = 1;
void primenum(int n){
  a[0] = 1;
  for(int i = 2 ; i <= n ; i++ ){
    bool b = true;
    for(int j = 2 ; j * j <= n; j++ ){
       if(i % j == 0 && i != j) b = false;
    }
    if(b) {a[x] = i;x++;}
  }
}
int main()
{
    int n,k,c=0;
    scanf("%d%d",&n,&k);
    primenum(n);
    for(int i = 2 ; i < n ; i++ ){
		for(int j = 0 ; j < i - 1 ; j++ ){
			if( a[j] + a[j+1] + 1 == a[i] ) c++;
        }
    }
	if(c>=k) puts("YES");
	else puts("NO");
    return 0;
}
