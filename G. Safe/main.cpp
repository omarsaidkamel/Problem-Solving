#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<=30;i++){
        sum+=pow(2,i);
        if(sum>=n)break;
    }
    puts(sum==n?"Valid":"Invalid");
    return 0;
}
