#include <iostream>
using namespace std;
int main()
{
    long long int sum=0;
    int n,A[100002];bool f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",A+i);
        sum+=A[i];
    }
    for(int i=0;i<n;i++){
       if(sum%A[i]!=0)f=1;
    }
    puts(f?"NO":"YES");
    return 0;
}
