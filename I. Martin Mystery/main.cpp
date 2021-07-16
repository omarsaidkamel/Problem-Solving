#include <iostream>
using namespace std;
int main()
{
    int n;double x,y,x1,y1,s;bool f=1,r=1;
    scanf("%d%lf%lf",&n,&x,&y);n--;
    while(n--){
      scanf("%lf%lf",&x1,&y1);
      if(r){r=0;s = ((y1-y)/(x1-x));}
      if(s != ((y1-y)/(x1-x)))f=0;
    }
    puts(f?"YES":"NO");
    return 0;
}
