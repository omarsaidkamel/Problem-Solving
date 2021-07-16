#include <iostream>
using namespace std;
int x,y,z;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    while(a != 1){
        if(a % 2 == 0) {x++;a/=2;}
        else if(a % 3 == 0) {y++;a/=3;}
        else if(a % 5 == 0) {z++;a/=5;}
        else break;
    }
    while(b != 1){
        if(b % 2 == 0) {x--;b/=2;}
        else if(b % 3 == 0) {y--;b/=3;}
        else if(b % 5 == 0) {z--;b/=5;}
        else break;
    }
    if(a!=b) puts("-1");
    else  printf("%d",abs(x)+abs(y)+abs(z));
    return 0;
}
