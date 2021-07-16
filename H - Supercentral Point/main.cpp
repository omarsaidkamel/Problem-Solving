#include <iostream>
using namespace std;
int main()
{
    int n,x[205],y[205],t=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) scanf("%d%d",&x[i],&y[i]);
     for (int i = 0; i < n; i++)
     {
        bool r=false, l=false, u=false, d=false;
        for (int j = 0; j < n; j++)
        {
            if (x[j] > x[i] and y[j] == y[i]) r = true;
            if (x[j] < x[i] and y[j] == y[i]) l = true;
            if (x[j] == x[i] and y[j] > y[i]) u = true;
            if (x[j] == x[i] and y[j] < y[i]) d = true;
        }
        if (r && l && u && d) t++;
     }
    printf("%d",t);
    return 0;
}
