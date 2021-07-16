#include <iostream>
using namespace std;
int lk[10002],y;
void lucky(){
  for(int i=4;i<1002;i++){
    int x=i;bool f=0;
    while(x){
        if(x%10!=4&&x%10!=7)f=1;
        x/=10;
    }
    if(!f)lk[y++]=i;
  }
}
int main()
{
    int n;lucky();bool f=0;
    scanf("%d",&n);
    for(int i=0;i<y;i++){
        if(n%lk[i]==0)f=1;
    }
    puts(f?"YES":"NO");
    return 0;
}
