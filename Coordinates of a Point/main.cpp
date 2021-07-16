#include <iostream>
using namespace std;
int main()
{
    double x,y;
    scanf("%lf %lf",&x,&y);
    if(x>0&&y>0)puts("Q1");
    if(x<0&&y<0)puts("Q3");
    if(x>0&&y<0)puts("Q4");
    if(x<0&&y>0)puts("Q2");
    if(x==0&&y!=0)puts("Eixo Y");
    if(x!=0&&y==0)puts("Eixo X");
    if(x==0&&y==0) puts("Origem");
    return 0;
}
