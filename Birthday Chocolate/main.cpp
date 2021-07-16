#include <iostream>
using namespace std;
int n,A[101],d,m,c,h,X;
int main()
{
    scanf("%d",&n);
    for(int i = 0; i < n; i++) scanf("%d",A+i);
    scanf("%d%d",&d,&m);
    for(int i = 0; i < n; i++){X = c = 0;
        for(int j = i; j < n; j++){
           X += A[j];c++;
           if(X == d && c == m) h++;
        }
    }
    printf("%d\n",h);
    return 0;
}
