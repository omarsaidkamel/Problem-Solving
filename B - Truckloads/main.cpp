#include <iostream>
using namespace std;
int solve(int x,int y){
    if(x <= y) return 1;
    if(x&1) return solve(x/2,y) + solve((x+1)/2,y);
    else return solve(x/2,y) + solve(x/2,y);
}
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m)){
       printf("%d\n",solve(n,m));
    }
    return 0;
}
