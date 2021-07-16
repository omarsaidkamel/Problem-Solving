#include <iostream>
using namespace std;
int main()
{
    int n,up,x,y,down;bool flag=true;
    scanf("%d%d",&n,&up);
    for(int i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        if(up==x||up==y||7-up==y||7-up==x)
            flag=false;
    }
    if(flag == true) puts("YES");
       else  puts("NO");
    return 0;
}
