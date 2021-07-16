#include <iostream>
using namespace std;
int main()
{
    int n,x;double sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        sum+=x;
    }
    printf("%.12lf",sum/n);
    return 0;
}
