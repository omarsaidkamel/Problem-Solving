#include <iostream>
#include<algorithm>
using namespace std;
int n,l,a[1002],x;
int main()
{
    bool z = false,zn = false;
    scanf("%d%d",&n,&l);
    for(int i = 0 ; i < n ; i++ ) scanf("%d",&a[i]);
    sort(a,a+n);
    x = max(l - a[n-1], a[0])*2;
    for(int i = 1 ; i < n ; i++ ) x = max(x , a[i] - a[i-1]);
    printf("%.9lf",x/2.0);
    return 0;
}
