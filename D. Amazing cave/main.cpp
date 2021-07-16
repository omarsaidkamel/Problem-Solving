#include <iostream>
using namespace std;
int main()
{   int n;
    scanf("%d",&n);
    if(n%10==4||n%10==7){
        if(n%2==0) puts("lucky even");
        else puts("lucky odd");
    }
    else {
        if(n%2==0) puts("unlucky even");
        else puts("unlucky odd");
    }
    return 0;
}
