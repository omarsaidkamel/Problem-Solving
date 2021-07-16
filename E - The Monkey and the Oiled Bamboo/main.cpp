#include <iostream>
using namespace std;
int n,q,A[100006],b;
bool OOOK(int x){
    for(int i = 0; i < n; i++){
      if(x < A[i + 1] - A[i])return false;
      else if(x == A[i + 1] - A[i]) x--;
    }
    return true;
}
int BinarySearch(){
 int l = 0,h = 100000002,mid;
 while(h - l > 0){
    mid = (h + l)/2;
    if(OOOK(mid))h = mid;
    else l = mid + 1;
 }
 return h;
}
int main()
{
    scanf("%d",&q);
    while(q != b){b++;
        scanf("%d",&n);
        for(int i = 1; i <= n; i++) scanf("%d",A + i);
      printf("Case %d: %d\n",b,BinarySearch());
    }
    return 0;
}
