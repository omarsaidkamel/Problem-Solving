#include <iostream>
using namespace std;
int n,m,c,a[55],b[55],mx;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++) scanf("%d",&b[i]);
    for(int i=0;i<n;i++){
         for(int j=0;j<m;j++){
			if(b[j] % a[i] == 0){
				if(b[j]/a[i]> mx){
					c = 0;
					mx = b[j]/a[i];
				}
				if(b[j]/a[i] == mx) c++;
             }
          }
    }
    printf("%d",c);
    return 0;
}
