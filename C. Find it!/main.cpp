#include <iostream>
using namespace std;
int main()
{
    int n,s1,s2=0,x;
    scanf("%d",&n);
    s1=((n+1)*n)/2;
    n--;
    while(n--){
        scanf("%d",&x);
        s2+=x;
    }
    printf("%d",s1-s2);
    return 0;
}
