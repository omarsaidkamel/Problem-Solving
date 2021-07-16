#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[(int)1e5+3],m,s;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
       if(i!=0){
        a[i]+=a[i-1];
       }
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&s);
        int* x = lower_bound(a,a+n,s);
        printf("%d\n",x-a+1);
        /*for(int j=0;j<n;j++){
          if(a[j]>=s){printf("%d\n",j+1);break;}
        }*/
    }
    return 0;
}
