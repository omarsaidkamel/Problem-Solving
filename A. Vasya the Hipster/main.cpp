#include <iostream>
using namespace std;
int main()
{
    int n,m,y,x;
    scanf("%d%d",&n,&m);
    y=min(n,m);x=max(n,m);
    cout<<y<<" "<<(x-y)/2;
    return 0;
}
