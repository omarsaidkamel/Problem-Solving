#include <iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    if(n==2)printf("1\n2");
    else if(n%2==0){
        printf("%d\n",n/2);
        for(int i=0;i<n/2;i++) printf("2 ");
    }
    else {
        printf("%d\n",n/2);
        for(int i=0;i<(n/2)-1;i++) printf("2 ");
        printf("3");
    }
    return 0;
}
