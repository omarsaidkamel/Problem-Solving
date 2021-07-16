#include <bits/stdc++.h>
using namespace std;
int e,i,cost,o,l,coin,f_arr,arr[109],res[109];
int main()
{
    cin>>f_arr>>coin;
    for(i;i<f_arr;i++) cin>>arr[i];

    for(i=0;i<f_arr-1;i++){
        if(arr[i]%2==0) e++;
        if(arr[i]%2==1) o++;
        if(e==o){
            if(arr[i]<=arr[i+1]){res[l]=arr[i+1]-arr[i];l++;}
            if(arr[i]>arr[i+1]) {res[l]=arr[i]-arr[i+1];l++;}
        }
    }
     sort(res,res+l);
    for(i=0;i<l;i++){
      if(cost+res[i]<=coin)
          cost+=res[i];
      else break;
    }
    cout<<i;
   return 0;
}
