#include <iostream>
using namespace std;
int main()
{
    int n,t=0,e=0,c=0,b=0;char x[102];
    scanf("%d%s",&n,x);
    for(int i=0;i<n;i++){
        if(x[i]=='t')t++;
        if(x[i]=='e')e++;
        if(x[i]=='b')b++;
        if(x[i]=='c')c++;
    }
    printf("%d %d %d %d",t,e,b,c);
    return 0;
}
