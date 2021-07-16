#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,t;long long int sum=0,a[30];
    for(int i=0;i<30;i++){
       sum+=pow(2,i);
       a[i] = sum;
    }
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
      for(int i=1;i<30;i++){
        if(n%a[i]==0){printf("%d\n",n/a[i]);break;}
      }
    }
    return 0;
}
