#include <iostream>
using namespace std;
int main()
{
    int n,A[10];bool f=0;
    for(int i=0;i<10;i++) scanf("%d",A+i);
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        if(n==A[i])f=1;
    }
    puts(f?"Found":"Not Found");
    return 0;
}
