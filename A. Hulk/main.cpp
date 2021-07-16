#include <iostream>
using namespace std;
int main()
{
    int n,c=0;
    scanf("%d",&n);
    while(n--){
        if(c%2==1) printf("I love ");
        else  printf("I hate ");
        if(n!=0)printf("that ");
        c++;
    }
    printf("it");
    return 0;
}
