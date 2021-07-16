#include <bits/stdc++.h>
using namespace std;
int a,n,s[100009],f;
 int main ()
{
	cin>>n;
	for (int i=1; i<=n; i++){cin>>a; s[i]=s[i-1]+a;}
	for (int i=1; i<n; i++) if(s[n]-s[i]==s[i]) f++;
	cout<<f;
	return 0;
}
