#include <iostream>
using namespace std;
int n,c;
int main()
{
    for(int i=0;i<5;i++){
        scanf("%d",&n);
        if(n%2==0)c++;
    }
    printf("%d valores pares\n",c);
    return 0;
}
