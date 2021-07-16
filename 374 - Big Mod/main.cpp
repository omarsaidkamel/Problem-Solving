#include <iostream>
using namespace std;
#define lli long long int
lli bigmod(lli a,lli b,lli c){
  if(b==0) return 1;
  else if(b % 2 == 0) {
    lli h = bigmod(a , b / 2 , c);
    return ( h * h ) % c;
  }
  else if(b % 2 == 1) {
     lli x,y;
     x = a % c ;
     y = bigmod( a , b - 1 , c);
    return ( x * y ) % c;
  }
}
int main()
{
    lli b,p,m;
    while(cin>>b>>p>>m) cout<<bigmod(b,p,m)<<"\n";
    return 0;
}
