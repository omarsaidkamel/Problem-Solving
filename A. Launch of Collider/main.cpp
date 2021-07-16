#include <iostream>
using namespace std;
int main()
{
    string s;int n,a[200008],mini = (int)1e9+8;
    scanf("%d",&n);
    cin>>s;
    for( int i = 0 ; i < n ; i++ ) scanf("%d",&a[i]);
    for( int i = 0 ; i < n-1 ; i++ ) {
            int sum = 0 ;
        if( s[i] == 'R' && s[i+1] == 'L'){
            sum += (a[i+1] - a[i]) / 2;
            mini = min( mini ,sum );
        }
    }
    if(mini == (int)1e9+8)puts("-1");
    else printf("%d",mini);
    return 0;
}
