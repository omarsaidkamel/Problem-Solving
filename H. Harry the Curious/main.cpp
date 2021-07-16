#include <iostream>
using namespace std;
int main()
{
    int l,r,n;bool x=0;
    scanf("%d%d%d",&l,&r,&n);
    for(int i=l;i<=r;i++){bool f=1;
      for(int j=2;j*j<=i;j++){
        if(i%j==0)f=0;
      }
      if(f){
        if(n%i==0&&i!=1){x=1;cout<<i<<" ";}
      }
    }
    if(!x)cout<<-1;
    return 0;
}
