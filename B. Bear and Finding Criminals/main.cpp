#include <iostream>
using namespace std;
int n,s,a[105],y,x,c;
int main()
{
    scanf("%d%d",&n,&s);
    for(int i = 1; i <= n ; i++ )scanf("%d",&a[i]);
    if(a[s] == 1)c++;
    for(int i = 1 ; i <= n ; i++ ){
         y  = x = 101;
         if(s + i <= n) y = s + i;
         if(s - i > 0) x = s - i;
         if(a[x] + a[y] == 2 && x != 101 && y != 101) c+=2;
         else if(a[x] + a[y] == 1 && x == 101) c++;
         else if(a[x] + a[y] == 1 && y == 101) c++;
    }
    printf("%d",c);
    return 0;
}
