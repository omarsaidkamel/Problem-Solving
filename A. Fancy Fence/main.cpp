#include <iostream>
using namespace std;
int main()
{
     int n,a;
     scanf("%d",&n);
     for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(360%(180-a)==0) puts("YES");
        else  puts("NO");
     }
    return 0;
}
