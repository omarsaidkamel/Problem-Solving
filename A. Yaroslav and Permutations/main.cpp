#include <iostream>
using namespace std;
int n,a[101],b[1002],mx;
int main()
{
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)scanf("%d",&a[i]);
    if(n == 1 || n == 2 && a[0] != a[1]) {puts("YES");return 0;}
    for(int i = 0 ; i < n ; i++){
     b[a[i]]++;
     mx = max( mx , b[a[i]] );
    }
    if(n % 2 == 0 && mx > n/2 || n % 2 == 1 && mx > ( n / 2 ) + 1 )puts("NO");
    else  puts("YES");
    return 0;
}
