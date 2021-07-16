#include <iostream>
using namespace std;
int main()
{
    char c;int n,m;
    scanf("%c%d%d",&c,&n,&m);
    if(c=='N'){
       printf("%d",(((m * n) + 1) / 2));
    }
    else if(c=='Q') printf("%d",min(n,m));
    else {
       int x = max(n,m);int h = min(n,m);
       int f = x%2==1?(x/2)+1:x/2;
       int y = h%2==1?(h/2)+1:h/2;
       printf("%d",f*y);
    }
    return 0;
}
