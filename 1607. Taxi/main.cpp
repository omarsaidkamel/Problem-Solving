#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    while(c>a){
        a+=b;
        c-=d;
    }
    cout<<a;
    return 0;
}
