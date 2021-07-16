#include <iostream>
using namespace std;
int main()
{
    int n ,c = 0 ;
    scanf("%d",&n);
    for(int i = 0; i < 32; i++)
        if((n>>i)&1)c++;
    printf("%d",c);
    return 0;
}
    /*int n , sum = 0 ;
    scanf("%d",&n);
    while(n){
        sum += n%2;
        n/=2;
    }
    printf("%d",sum);*/
