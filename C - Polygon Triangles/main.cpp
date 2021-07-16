#include <iostream>
using namespace std;
int a,b,c,n,p;
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    if(a<b+c&&b<a+c&&c<b+a) p++;
    }
    if(p==n)printf("YES");
    else printf("NO");
    return 0;
}
