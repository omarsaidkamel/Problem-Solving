#include <iostream>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2,a,b,c,d;
    scanf("%d%d%d%d%d%d",&r1,&r2,&c1,&c2,&d1,&d2);
    a=(d1-r2+c1)/2; d=(d1-c1+r2)/2;
    b=(c2-r2+d2)/2; c=(d2-c2+r2)/2;
    if(a==b||a==c||a==d||b==c||c==d||b==d||
       a>9||a<=0||c>9||c<=0||b>9||b<=0||d>9||d<=0
       )
        puts("-1");
    else
        printf("%d %d\n%d %d",a,b,c,d);
    return 0;
}
