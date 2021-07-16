#include <bits/stdc++.h>
using namespace std;
int n,m,a,mx,j,x;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
         mx=(a+m-1)/m;
         if (mx>=j){x=i; j=mx;}
    }
    printf("%d",x);
    return 0;
}
