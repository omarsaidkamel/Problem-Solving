#include <iostream>
using namespace std;
float p,c,s;
int main()
{
    for(int i=0;i<6;i++)
    {
       scanf("%f",&p);
        if(p>0){c++;s+=p;}
    }
    printf("%.f valores positivos\n%.1f\n",c,s/c);
    return 0;
}
