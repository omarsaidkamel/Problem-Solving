#include <iostream>
using namespace std;
int x,y,s;
int main()
{
    scanf("%d%d",&x,&y);
    if(x>y){
      for(int i=y+1;i<x;i++){
        if(i%2!=0) s+=i;
      }
    }
    else{
      for(int i=x+1;i<y;i++){
        if(i%2!=0) s+=i;
      }
    }
    printf("%d\n",s);
    return 0;
}
