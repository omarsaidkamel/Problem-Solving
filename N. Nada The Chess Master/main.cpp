#include <iostream>
using namespace std;
int main()
{
    char c[2];int a;
    scanf("%s",c);
    a=min(c[0]-'a',(c[1]-'0')-1);
    a+=min('h'-c[0],(c[1]-'0')-1);
    a+=min(c[0]-'a',8-(c[1]-'0'));
    a+=min('h'-c[0],8-(c[1]-'0'));
    printf("%d",a);
    return 0;
}
