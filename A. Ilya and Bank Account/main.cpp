#include <iostream>
using namespace std;
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n<0){
        n *= -1;
        long long int f =  n%10;
        long long int l = (n/10)%10;
        if(f==0&&n<100) printf("0");
        else if(f>=l) printf("-%lld",n/10);
        else printf("-%lld",((n/100)*10)+f);
     //   cout<<f <<" "<<l<<"\n";
    }
    else printf("%lld",n);
    return 0;
}
