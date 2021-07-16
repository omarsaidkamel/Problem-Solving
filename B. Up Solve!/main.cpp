#include <iostream>
using namespace std;
int main()
{
    long long int a,b,c,x;bool xx=0;
    scanf("%lld%lld%lld",&a,&b,&c);
    for(long long int i=-200;i<=202;i++){
      for(long long int j=-200;j<=202;j++){
           x = a - (i+j);
           if(xx)break;
           if(((x+i+j)==a)&&((x*i*j)==b)&&(((i*i)+(j*j)+(x*x))==c)){
              if(i<=j&&j<=x){
                xx=1;
                cout<<i<<" "<<j<<" "<<x;
              }
           }

      }
    }
    if(!xx)cout<<-1;
    return 0;
}
