#include <iostream>
using namespace std;
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n--){
      scanf("%d%d",&a,&b);
      cout<<(b -(a%b))%b<<"\n";
    }
    return 0;
}
