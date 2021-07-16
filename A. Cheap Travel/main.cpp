#include <iostream>
using namespace std;
int main()
{
    int n,m,a,b;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    int x = n/m;
    if(m>n&& b<(a*n))printf("%d",b);
    else if((x*b)<(a*n)){
        if((n%m)== 0) printf("%d",x*b);
        else{
            if(b<a) printf("%d",(x+1)*b);
            else printf("%d",(x*b)+((n%m)*a));
        }
    }
    else printf("%d",a*n);
    return 0;
}
