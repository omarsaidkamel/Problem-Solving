#include <iostream>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    n = min(n,m);
    puts(n%2==0?"Malvika":"Akshat");
    return 0;
}
