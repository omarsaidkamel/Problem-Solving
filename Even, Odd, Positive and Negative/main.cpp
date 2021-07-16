#include <iostream>
using namespace std;
int n,p,ne,e,o;
int main()
{
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        if(n>0)p++;
        if(n<0)ne++;
        if(n%2==0)e++;
        if(n%2!=0)o++;
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",ne);
    return 0;
}
