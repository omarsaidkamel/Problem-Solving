#include <iostream>
using namespace std;
int a[100000],g,d,f,m,i,j;
int main()
{
    scanf("%d",&g);
    for(i;i<g;i++) scanf("%d",&a[i]);
    scanf("%d",&d);
    for(j;j<d;j++)
            {int n=0;
                scanf("%d%d",&f,&m);
               if(f==m) printf("%d\n",a[f]);
               else
                {
                 for(f;f<=m;f++) n+=a[f];
                      printf("%d\n",n);
                }
            }
    return 0;
}
