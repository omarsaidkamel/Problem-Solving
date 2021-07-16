#include <iostream>
using namespace std;
int e,o,p,n;
int main()
{
   int h,m;cin>>h;
   for(int i=0;i<h;i++){
    cin>>m;
    if(m>0)p++;if(m<0)n++;
    if(m%2==0)e++;if(m%2!=0)o++;
   }
   cout<<"Even: "<<e<<"\n"<<"Odd: "<<o<<"\n"<<"Positive: "<<p<<"\n"<<"Negative: "<<n<<"\n";
    return 0;
}
