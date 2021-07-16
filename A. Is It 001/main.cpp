#include <iostream>
using namespace std;
int main()
{
    int n,m;char c;
    scanf("%d %c %d",&n,&c,&m);
    if(n > m && c=='>')puts("Right");
    else if(n < m && c=='<')puts("Right");
    else if(n == m && c=='=')puts("Right");
    else puts("Wrong");
    return 0;
}
