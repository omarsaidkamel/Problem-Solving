#include <iostream>
using namespace std;
int q,n,m;string s,d;
bool ok (int x){
    string h = "";int c = 0;
 for(int i = 0; i < n; i++){
   for(int j = 0; j < x; j++){
     h += s[i];
   }
 }
  for(int i = 0; i < m; i++)
  { if(h[c]==d[i]) c++;}
  return c == h.size();
}
int BinarySearch(){
  int l = 0,h = (m/n),mid;
  while(h - l > 0){
    mid = (h + l + 1)/2;
  // cout<<h<<" "<<mid<<" "<<l<<"\n";
    if(ok(mid)) l = mid;
    else h = mid - 1;
  }
  return h;
}
int main()
{
    scanf("%d",&q);
    while(q--){
        cin>>s>>d;
        n = s.size();m = d.size();
        printf("%d\n",BinarySearch());
    }
    return 0;
}
