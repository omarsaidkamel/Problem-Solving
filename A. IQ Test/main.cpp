#include <iostream>
using namespace std;
int main()
{
    int n,a[101],e,ee=0,o,oo=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",a+i);
    for(int i=0;i<n;i++){
        if(a[i]%2==0){e=i;ee++;}
        else {o=i;oo++;}
    }
    if(oo==1) printf("%d",o+1);
    else printf("%d",e+1);
    return 0;
}
