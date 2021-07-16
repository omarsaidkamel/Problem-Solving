#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[15],c=0,sum=0;
    scanf("%d",&n);
    for(int i=0;i<12;i++){scanf("%d",&a[i]);sum+=a[i];}
    if(sum<n){
        puts("-1");
        return 0;
    }
    sort(a,a+12);
    for(int i=11;i>=0;i--){
      if(n-a[i]>=0){
       if(a[i]!=0)
        c++;
        n-=a[i];
      }
      else {
          if(n!=0)
       printf("%d",++c);
       else
       printf("%d",c);
        return 0;
      }
    }
    printf("%d",c);
    return 0;
}
