#include <iostream>
using namespace std;
int main()
{
    int n,nn;scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&nn);
        if(nn>0&&nn%2==0)puts("EVEN POSITIVE");
        if(nn>0&&nn%2==1)puts("ODD POSITIVE");
        if(nn<0&&nn%2==-1)puts("ODD NEGATIVE");
        if(nn<0&&nn%2==0)puts("EVEN NEGATIVE");
        if(nn==0)puts("NULL");
    }
    return 0;
}
