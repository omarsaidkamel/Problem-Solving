#include <iostream>
using namespace std;
int A[1002],B[1002],n,m,c;
bool CanBake(int x){
    int p = m;
  for(int i = 0; i < n; i++){
    if(B[i] - (A[i] * x) < 0){
        if((B[i] + p) - (A[i] * x)  < 0) return false;
        else p = (B[i] + p) - A[i] * x;
    }
  }
  return true;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i = 0; i < n; i++) scanf("%d",A+i);
    for(int i = 0; i < n; i++) scanf("%d",B+i);
    for(int i = 0; i < 2002; i++){
      if(!CanBake(i)){
        printf("%d",i-1);
        break;
      }
    }
   /* while(1){
      for(int j = 0; j < n; j++){
         if(B[j] - A[j] < 0){
            if(B[j] - A[j] + m >= 0)
              {
                m += B[j] - A[j];
                B[j] = 0;
              }
            else{
                  printf("%d",c);
                  return 0;
                }
         }
         else B[j] -= A[j];
       }
       c++;
    }*/
    return 0;
}
