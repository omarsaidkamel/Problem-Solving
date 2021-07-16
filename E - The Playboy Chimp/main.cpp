#include <iostream>
#include <algorithm>
using namespace std;
const int N = 50009;
int n,a[N],q,qq;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)  scanf("%d",&a[i]);
       scanf("%d",&q);
    for(int i=0;i<q;i++){
      bool f=false,s=false;
      scanf("%d",&qq);
      int* w=lower_bound(a,a+n,qq);
      if(*w==a[0]) f=true;
      int* aa=upper_bound(a,a+n,qq);
      if(aa==a+n) s=true;
      if(f==false && s==true)printf("%d X\n",*(w-1));
      else if(f==true && s==false)printf("X %d\n",*aa);
      else if(f==false && s==false)printf("%d %d\n",*(w-1),*aa);
      else printf("X X\n");
    }
    return 0;
}
