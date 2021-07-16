#include <iostream>
using namespace std;
int n,m,a[10005],x;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d",&m);
     int mx=0,b=0;
      for(int j=0;j<m;j++){
         scanf("%d",&x);
         a[x]++;
         if(mx<x)mx=x;
      }
      for(int j=0;j<=mx;j++){
        if(a[j]+a[j+1]>b)
            b=a[j]+a[j+1];
      }
     printf("%d\n",b);
       fill(a,a+mx+1,0);
    }
    return 0;
}
