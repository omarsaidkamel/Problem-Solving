#include<iostream>
#include<algorithm>
using namespace std;
bool com(int a,int b){return a>b;}
int a[(int)2e6+2],n,k=1;long long x;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n,com);
	while(k<=n)
	{
		for(int i=0;i<k;i++) x+=a[i];
		k*=4;
	}
	printf("%I64d",x);
	return 0;
}
