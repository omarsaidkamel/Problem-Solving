#include <iostream>
using namespace std;
long long n,k,c,g;
bool ok(int x){
   long long sum = g - ((k-x)*((k-x)+1))/2;
   return sum >= n;
}
/*1 2 3 4 5*/
int BinarySearch(){
int l = 0,h = k,mid;
 while(h-l>0){
    mid = (h+l)/2;
    if(ok(mid))h=mid;
    else l=mid+1;
 }
 return l;
}
int main()
{
    scanf("%I64d %I64d",&n,&k);n--;k--;
    g = (k * (k + 1)) / 2;
    if (n > g) cout << -1;
    else cout<<BinarySearch();
    return 0;
}

