#include <iostream>
using namespace std;
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    sum+=n/100;
    n %= 100;
    sum+=n/20;
    n %= 20;
    sum+=n/10;
    n %= 10;
    sum+=n/5;
    n %= 5;
    sum+=n;
    cout<<sum;
    return 0;
}
