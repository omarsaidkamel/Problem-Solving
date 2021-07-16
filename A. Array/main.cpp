#include <iostream>
using namespace std;
int main()
{
    int n,a[102] ,x,y;bool b = true,c=true ;
    scanf("%d",&n);
    for(int i = 0; i < n ; i++)  {
        scanf("%d",&a[i]);
        if(a[i] < 0 && c) { x= a[i];a[i]=1002; c=false;}
        if(a[i] > 0 && a[i] != 1002 && b) { y =a[i];a[i]=1002; b = false;}
    }
    printf("1 %d\n",x);
    if(b){
     for(int i = 0; i < n-1 ; i++){
         if(a[i] < 0 && a[i+1] < 0) {
                printf("2 %d %d\n",a[i],a[i+1]);
                 a[i] = 1002; a[i+1] = 1002;
                 break;
          }
     }
     printf("%d ",n-3);
    }
    else {
        printf("1 %d\n",y);
        printf("%d ",n-2);
    }
    for(int i = 0; i < n ; i++){
        if(a[i] != 1002){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
