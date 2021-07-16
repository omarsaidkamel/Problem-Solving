#include <iostream>
using namespace std;
int n,a,b;
int main(){
   scanf("%d",&n);
   while(n--){
     scanf("%d",&a);
     b = max(a,b);
   }
  printf("%d",b);
}
