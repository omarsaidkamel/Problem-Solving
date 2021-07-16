#include <bits/stdc++.h>
using namespace std;
const double EPS = 1e-6;
int t,n,k,a,b,c;
multimap<int,pair<int,int>>pix;
double calculate(int x2,int x1,int y2,int y1){
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}
bool ok(int x){
   int c;
   for(auto id = pix.begin();id != pix.end();id++){
      c=1;
     for(auto it = id;it != pix.end();it++){
       if(id->first != it->first){
        //cout<<id->first<<" "<<it->first<<" "<<x<<"\n";
        double h = calculate(it->second.first,id->second.first,it->second.second,id->second.second);
        double y = x*sqrt(2);
      //  cout<<h<<" "<<y<<"\n";
        if(h > y)break;
        else{if(c == it->first - 1)c++;}
       }
     }
    // cout<<c<<" "<<k<<"\n";
     if(c==k) return true;
   }
   return false;
}
int BinarySearch(){
 int l = 0,h = 2000000,mid;
 while(h - l > 0){
    mid = (h+l)/2;
    if(ok(mid)) h = mid;
    else l = mid + 1;
 }
 return h;
}
int main(){
    scanf("%d",&t);
    while(t--){
      scanf("%d%d",&n,&k);
      for(int i = 0; i < n; i++){
        scanf("%d%d%d",&a,&b,&c);
       pix.insert(make_pair(c,make_pair(a,b)));
      }
      printf("%d\n",BinarySearch());
      pix.clear();
    }
    return 0;
}
