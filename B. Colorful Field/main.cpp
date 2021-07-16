#include <bits/stdc++.h>
using namespace std;
const int MN = 1e4+5;
int n,m,k,t,a,b,x[MN];
int main()
{
    scanf("%d%d%d%d",&n,&m,&k,&t);
    for(int i = 1; i <= k; i++){
      scanf("%d%d",&a,&b);
      x[i] = (a * m) + b;
    }
    sort(x+1,x+k+1);
    for(int i = 1 ; i <= t ; i++){
      scanf("%d%d",&a,&b);
        int p = lower_bound(x+1,x+k+1,(m * a) + b) - x;
		if((a * m) + b == x[p]) puts("Waste");
		else{
			int s = ((a - 1) * m +  b - p + 1) % 3;
			puts((s == 1) ?"Carrots":(s == 2)?"Kiwis":"Grapes");
		}
    }
    return 0;
}
