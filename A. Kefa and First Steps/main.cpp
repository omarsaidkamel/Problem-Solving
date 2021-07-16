#include <iostream>
using namespace std;
int main()
{
    int n,c=0,a[100003],mx=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",a+i);
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1])c++;
        else c=0;
        mx=max(c,mx);
    }
    printf("%d",mx+1);
    return 0;
}
