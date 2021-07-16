#include <iostream>
using namespace std;
int n,lz,lo,rz,oo,l,r;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&l,&r);
        if(l)lo++;
        else lz++;
        if(r)oo++;
        else rz++;
    }
    printf("%d",min(lo,lz)+min(oo,rz));
    return 0;
}
