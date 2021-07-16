#include <iostream>
using namespace std;
const int N=1e7+5;int n;
bool prime(int n){
   if(n<2) return false;
     for(int j=2;j<n;j++){
          if(n%j==0)
            return false;
      }
      return true;
}
int main()
{
    scanf("%d",&n);
    if(prime(n-2)) printf("2 %d",n-2);
    else  printf("-1");
    return 0;
}
