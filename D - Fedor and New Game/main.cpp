#include <iostream>
using namespace std;
int main()
{
    int n,k,m,a[1001],h = 0;
    scanf("%d%d%d",&n,&m,&k);
    for(int i = 0; i <= m; i++)scanf("%d",a+i);

    for(int j = 0; j < m; j++){
            int c = 0;
      for(int i = 0; i <= n; i++){
        if(((a[j]>>i)&1) != ((a[m]>>i)&1))c++;
        if(c > k) break;
      }
     if(c <= k) h++;
    }
    printf("%d",h);
    return 0;
}
