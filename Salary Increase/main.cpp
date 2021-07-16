#include <iostream>
using namespace std;
int main()
{
    float n;
    scanf("%f",&n);
    if(n>0&&n<=400.00) printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", n * 1.15, n * 0.15);
    else if(n>=400.01&&n<=800.00) printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", n * 1.15, n * 0.15);
    else if(n>=800.01&&n<=1200.00) printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", n * 1.10, n * 0.10);
    else if(n>=1200.01&&n<=2000.00) printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", n * 1.07, n * 0.07);
    else  printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", n * 1.04, n * 0.04);
    return 0;
}
