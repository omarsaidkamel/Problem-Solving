#include<iostream>
using namespace std;
int A[100000],n,k,q;
bool CanClose(int x){
    int u = 0,z = 0;
    for(int i = 0; i < n; i++){
        if(A[i] > z) {z = x  + A[i] - 1;u++;}
    }
    return u <= k;
}
int BinarySearch(){
   int  l = 0,h = 1000000002,mid;
   while(h - l > 0){
     mid = (h + l) / 2;
     if(CanClose(mid)) h = mid;
     else l = mid + 1;
   }
   return h;
}
int main(){
    scanf("%d",&q);
    while(q--){
        scanf("%d%d",&n,&k);
        for(int i = 0; i < n; i++)scanf("%d",A + i);
        cout<<BinarySearch()<<"\n";
    }
 return 0;
}
/*#include <iostream>
using namespace std;
int q,n,k,A[100000];
bool CanClose(int x){
  int b = 0, z = 0;
  for(int i = 0; i < n; i++){
    if(b < A[i]){
        b = A[i] + x - 1;
        z++;
    }
  }
  return z <= k;
}
int BinarySearch(){
 int l = 1,h = 1000000001,mid;
   while(h - l > 0){
        mid = (h + l) /2;
      if(CanClose(mid)) h = mid;
      else l = mid + 1;
   }
   return l;
}
int main()
{
    scanf("%d",&q);
    while(q--){
        scanf("%d%d",&n,&k);
        for(int i = 0; i < n; i++) scanf("%d",A + i);
        cout<<BinarySearch()<<"\n";
    }
    return 0;
}*/
