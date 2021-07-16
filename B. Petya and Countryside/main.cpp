#include <iostream>
#include<algorithm>
using namespace std;
int n,a[1002],b[1002],y;
int main()
{
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++) scanf("%d",&a[i]);
    for(int i = 0 ; i < n ; i++){
       if(i < n - 1){
              y = a[i];
           for(int j = i + 1 ; j < n ; j++){
             if( y >= a[j]){b[i]++; y = a[j];}
             else break;
           }
       }
       if(i){
              y = a[i];
           for(int j = i - 1 ; j >= 0 ; j--){
             if( y >= a[j]) {b[i]++; y = a[j];}
             else break;
           }
        }
    }
    printf("%d",*max_element(b,b+n)+1);
    return 0;
}
