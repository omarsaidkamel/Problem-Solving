#include <iostream>
using namespace std;
int GCD(int x){
 if(x==1)return x;
 else return GCD(x-1) * x;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    cout<<GCD(min(n,m));
    return 0;
}
