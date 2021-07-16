#include<iostream>
#include<algorithm>
using namespace std;
int n,a,b,c[2009];
int main()
{
    scanf("%d%d%d",&n,&a,&b);
    for(int i=0;i<n;i++) scanf("%d",&c[i]);
    sort(c,c+n);
    printf("%d",c[b]-c[b-1]);
    return 0;
}
