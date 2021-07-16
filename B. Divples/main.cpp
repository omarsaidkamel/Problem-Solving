#include <iostream>
using namespace std;
long long int a,b,g=1;
int main()
{
    cin>>a>>b;
      if(a%b==0){
        cout<<b<<" ";
    if(a%2==0) g=2;
    else g=3;
      while(g*b<=a){
        if(a%(g*b)==0) cout<<g*b<<" ";
         g+=2;
      }
    }
    return 0;
}
