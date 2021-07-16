#include <iostream>
using namespace std;
float p,c;
int main()
{
    for(int i=0;i<6;i++)
    {
       scanf("%f",&p);
        if(p>0)c++;
    }
    printf("%.f valores positivos\n",c);
    return 0;
}
