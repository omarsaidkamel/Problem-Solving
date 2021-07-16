#include <iostream>
using namespace std;
int main()
{
    long long int n;int c=0;
    scanf("%lld",&n);
    for(long long int i=2;i*i<=n;i++){
       while(n%i==0){
                n/=i;c++;
        }
    }
    if(n!=1) printf("%d",c+1);
    else printf("%d",c);
    return 0;
}
