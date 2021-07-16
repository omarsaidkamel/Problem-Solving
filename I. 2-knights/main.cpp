#include <iostream>
using namespace std;
int main()
{
    int x,y,x1,y1;
    scanf("%d%d%d%d",&x,&y,&x1,&y1);
    if(((x+2)==x1)&&((y+1)==y1))puts("Yes");
    else if(((x+2)==x1)&&((y-1)==y1))puts("Yes");
    else if(((x-2)==x1)&&((y+1)==y1))puts("Yes");
    else if(((x-2)==x1)&&((y-1)==y1))puts("Yes");
    else if(((x+1)==x1)&&((y+2)==y1))puts("Yes");
    else if(((x-1)==x1)&&((y+2)==y1))puts("Yes");
    else if(((x-1)==x1)&&((y-2)==y1))puts("Yes");
    else if(((x+1)==x1)&&((y-2)==y1))puts("Yes");
    else if(x==x1&&y==y1)puts("Yes");
    else puts("No");
    return 0;
}
