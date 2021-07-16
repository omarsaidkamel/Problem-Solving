#include <iostream>
using namespace std;
int a[50],x;
void lucky(int n){
  for(int i=4;i<=n;i++){bool f=0;
  int t=i;
    while(t){
        if(t%10!=4&&t%10!=7)f=1;
        t/=10;
    }
    if(!f)a[x++]=i;
  }
}
int main()
{
    int n;bool d=0;
    scanf("%d",&n);
    lucky(n);
    for(int i=0;i<x;i++){
         if(n%a[i]==0)d=1;
    }
    puts(d?"YES":"NO");
    return 0;
}
