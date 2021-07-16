#include <iostream>
using namespace std;
int main()
{
    double a=0.0, M[12][12];
    char T[2];
    int C,x,y,z,p=1;
    scanf("%s", &T);
    for(x=0;x<=11;x++)
    {
        for(y=0; y<=11; y++)
            scanf("%lf", &M[x][y]);
    }
    for(z=0; z<=11;z++)
    {
        for(C=p; C<=11;C++)
            a+=M[z][C];
        p++;
    }
    if(T[0]=='S')
        printf("%.1lf\n",a);
    else if(T[0]=='M')
    {
        a=a/66.0;
        printf("%.1lf\n",a);
    }
    return 0;
}
/*char o;double j=0.0;int a[12][12];
int main()
{
    while(cin>>o)
        {
            for(int x=0;x<12;x++)
            {
              for(int y=0;y<12;y++)
                {
                    cin>>a[x][y];
                }
            }
            for(int d=0;d<12;d++)
              {
                for(int s=d+1;s<12;s++)
                    {
                        j+=a[d][s];
                    }
              }
          if(o=='S')
          {
            cout<<j<<"\n";
          }
         else if(o=='M')
            {
              j=j/66.0;
              cout<<j<<"\n";
            }
        }
   return 0;
}
*/
