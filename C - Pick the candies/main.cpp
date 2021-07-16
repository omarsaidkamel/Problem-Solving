#include <iostream>
using namespace std;
int t,n,k,i,a[10009];
int main()
{
    scanf("%d",&t);
     while(t--){
      scanf("%d%d",&n,&k);
      for(i=0;i<n;i++) scanf("%d",&a[i]);
         int p=0;
         while(k<=n){
            int mx=-100009;
           for(i=p;i<k;i++){
            if(a[i]>mx)mx=a[i];
           }
           printf("%d ",mx);
           p++;k++;
         }
         puts("");
    }
    return 0;
}
  /*  while(t--){
      scanf("%d%d",&n,&k);
      for(int i=0;i<n;i++) {
        scanf("%d",&a);
        if(mx<a) mx=a;
        if(k<=1)printf("%d ",mx);
        k--;
      }
      puts("");
    }*/
