#include <bits/stdc++.h>
using namespace std;
int q,n,c,A[100002];
bool ok(int x){
    int j = c - 1 ,b = A[0];
    for(int i = 0; i < n-1; i++){
      //  cout<<A[i+1]<<" "<<b<<" "<<A[i+1] - b<<"\n";
        if(A[i+1] - b >= x) {j--;b = A[i+1];}
    }
   return j <= 0;
}
int BinarySearch(){
 int l = 0,h = 1000000001,mid;
 while(h - l > 0){
    mid = (h + l + 1) / 2;
// cout<<l<<" "<<mid<<" "<<h<<"\n";
    if(ok(mid)) l = mid;
    else h = mid - 1;
 }
 return h;
}
int main()
{
    scanf("%d",&q);
    while(q--){
        scanf("%d%d",&n,&c);
        for(int i = 0; i < n; i++)scanf("%d",A + i);
        sort(A,A+n);
      printf("%d\n",BinarySearch());
    //   printf("%d\n",ok(3));
    }
    return 0;
}
/*
7 4
1 2 4 8 9 12 16
5 3
1 2 4 8 9
*/
