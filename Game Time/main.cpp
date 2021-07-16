#include <iostream>
using namespace std;
int main()
{
    int f,l;
    scanf("%d%d",&f,&l);
    if(f==l)printf("O JOGO DUROU 24 HORA(S)\n");
    else if(f>11&&l>11||f<12&&l>11||f<13&&l<13&&l>f) printf("O JOGO DUROU %d HORA(S)\n",l-f);
    else if(f>11&&l<13||f<13&&l<13&&l<f) printf("O JOGO DUROU %d HORA(S)\n",24-f+l);
    return 0;
}
