#include <iostream>
using namespace std;
int main()
{
    int n ,c=0;
    scanf("%d",&n);
    while(n){
        if(n - 5 >= 0) n-=5;
        else if(n - 4 >= 0 ) n-=4;
        else if(n - 3 >= 0 ) n-=3;
        else if(n - 2 >= 0 ) n-=2;
        else n-=1;
        c++;
    }
    printf("%d",c);
    return 0;
}
