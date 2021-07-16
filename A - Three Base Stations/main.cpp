#include <bits/stdc++.h>
using namespace std;
const double EPS = 1e-8;
long long n,A[1000005];
bool ok(long long  x){
   long long u=0,l=0;
   for(int i = 0; i < n; i++){
      if(A[i]>l){
       l = A[i] + x*2;
       u++;
      }
   }
  return u<=3;
}
double BinarySearch(){
 long long l = 0,h = 1000000000011,mid;
 while(h - l >0){
    mid =(h+l)/2;
    if(ok(mid)) h=mid;
    else l = mid+1;
 }
 return l;
}
int main()
{
    scanf("%lld",&n);
    for(int i = 0; i < n; i++){
      scanf("%lld",A + i);
      A[i]<<=1;
    }
    sort(A,A+n);
    long long  y = BinarySearch(),h=0;
    printf("%.6lf\n", y/2.0);
     int u=0;
     for(int i = 0; i < n; i++){
      if(A[i]>h) {
       printf("%.6lf ", (A[i] + y)/2.0);
       h = A[i] + 2*y;
        u++;
      }
     }
     while (u < 3) {
       printf("%.6lf ", 0.0);
       u++;
      }
    return 0;
}
