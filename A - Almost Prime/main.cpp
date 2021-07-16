#include <iostream>
using namespace std;
int c,a[3009];int x;
void isprimes(int n){
    bool f = true;
  for(int i=0;i<n;i++){
    for(int j=2;j*j<=n;j++){
        if(i%j==0&&i!=j){
            f=false;
        }
    }
    if(f){a[x++]=i;} f = true;
  }
}
void divisors(int n) {
    int z=0;
	for (int i = 2; i*i < n; i++) {
        if (n % i == 0) {
			for(int j=1;j<x;j++){
               if((n/i)%a[j]==0&&i%a[j]!=0){
                    if(z>1)break;
                    z++;
               // cout<<i<<" "<<a[j]<<" "<<n<<"\n";
               }
			}
		}
		if(z+1==2){c++;break;}
	}
}
int main()
{
    int n;scanf("%d",&n);isprimes(n);
    for(int i=1;i<=n;i++)divisors(i);
    printf("%d",c);
    return 0;
}
