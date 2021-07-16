#include <iostream>
using namespace std;
int x,y,z,xc,yc,zc,t;
int main()
{
    scanf("%d",&t);
    for(int  i=0;i<t;i++){
        scanf("%d %d %d",&x,&y,&z);
        xc+=x;yc+=y;zc+=z;
    }
    if(xc==0&&yc==0&&zc==0)puts("YES");
    else puts("NO");
    return 0;
}
