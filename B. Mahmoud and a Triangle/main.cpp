#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005];
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++)scanf("%d",&a[i]);
    sort(a,a+n);
    for(int i = 0 ; i < n - 2 ; i++)
	{
		if(a[i]+a[i+1]>a[i+2]) {puts("YES");return 0;}
	}
	puts("NO");
    return 0;
}
