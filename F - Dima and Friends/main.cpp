#include <iostream>
using namespace std;
int n,a,sum,m,i;
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&a);
        sum+=a;
    }
    for(i=1;i<6;i++){
        sum++;
        if(sum%(n+1)!= 1)m++;
    }
    printf("%d",m);
    return 0;
}
