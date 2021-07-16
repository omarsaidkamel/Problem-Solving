#include <iostream>
using namespace std;
int main()
{
    int n,c=0,l,f;long long int r,x;bool h=0;
    scanf("%d%lld",&n,&r);
    for(int i=1;i<=n;i++){
        scanf("%lld",&x);
        if(x==r){
            c++;l=i;
            if(!h){
                h=1;
                f=i;
            }
        }
    }
    if(!c)puts("-1");
    else printf("%d %d %d",f,l,c);
    return 0;
}
