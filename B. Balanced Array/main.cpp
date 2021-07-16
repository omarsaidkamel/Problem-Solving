#include <iostream>
using namespace std;
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--){
     scanf("%d",&n);
     if((n/2)%2==1)puts("NO");
     else { puts("YES");
        for(int i=2;i<=n;i+=2) printf("%d ",i);
        int c=1;
        for(int i=1;i<=n+1;i+=2){
            if(c==((n/2)/2)+1){c++;continue;}
            printf("%d ",i);
            c++;
        }
        puts("");
     }
    }
    return 0;
}
