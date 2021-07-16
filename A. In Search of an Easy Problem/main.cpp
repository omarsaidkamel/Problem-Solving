#include <iostream>
using namespace std;
int main()
{
    int n,m;bool f=0;
    scanf("%d",&n);
    while(n--){
      scanf("%d",&m);
      if(m)f=1;
    }
    puts(f?"HARD":"EASY");
    return 0;
}
