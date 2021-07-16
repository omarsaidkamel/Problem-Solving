#include <iostream>
using namespace std;
int main()
{
    long long int n;int e=0,o=0;
    scanf("%lld",&n);
    while(n){
        if((n%10)%2==0) e++;
        else  o++;
        n/=10;
    }
    printf("Even : %d\nOdd : %d",e,o);
    return 0;
}
