#include <iostream>
using namespace std;
int n,k;
bool ooook(int x){
   int sum = x;
   while(x){sum += (x / k);x/=k;}
   return sum >= n;
}
int BinarySearch(){
 int l = 0,h = 1000000004,mid;
     while(h - l > 0){
       mid = (h + l) / 2;
      if(ooook(mid))  h = mid;
      else l = mid + 1;
     }
     return h;
}
int main()
{
    scanf("%d%d",&n,&k);
    printf("%d",BinarySearch());
    return 0;
}
