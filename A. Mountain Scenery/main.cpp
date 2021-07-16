#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,a[1006],i;
	cin>>n>>k;
	for (i=0;i<(2*n)+1;i++) scanf("%d" ,&a[i]);
	for (i=0;i<(2*n)+1;i++)
	{
		if (k&&i%2==1&&a[i]>a[i-1]+1&&a[i]>a[i+1]+1)
		{
			k--;
			printf("%d ",a[i]-1);
		}
		else printf("%d ",a[i]);
	}
}
