#include <iostream>
using namespace std;
int n,k,A[1000002],h;
bool ok(int x){
    long long ans =1000000009 ,sum;
   // cout<<"x- "<<x<<"\n";
    for(int i=0;i<n;i++){
     if((i+x-1)< n){
       if(!i) sum = A[i+x-1];
       else sum = A[i+x-1]-A[i-1];
      // cout<<i<<" "<<A[i-1]<<" "<< A[i+x-1]<<" "<<sum<<"\n";
     }
     ans = min(ans,sum);
    }
    return ans <= k;
}

int BinarySearch(){
 int l=0,h=n,mid;
 while(h-l>0){
    mid=(l+h+1)/2;
    if(ok(mid))l=mid;
    else h=mid-1;
 }
 return l;
}
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&h);
        if(!i) A[i]=h;
        else A[i] = A[i-1] + h;
    }
    cout<<BinarySearch();
    return 0;
}
