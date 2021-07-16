#include <iostream>
using namespace std;
int main()
{
    int g,h,n,a[109],mi=1005;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<n;i++){
      for(int j=i+1;j<=n;j++){
       if(mi>abs(a[i]-a[j])&&i==j-1)
         { g=i;h=j;
           mi=abs(a[j]-a[i]);
         }
      }
    }
    if(mi>abs(a[1]-a[n]))
    printf("%d %d",1,n);
    else
    printf("%d %d",g,h);
    return 0;
}
