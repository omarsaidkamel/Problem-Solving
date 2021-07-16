#include <bits/stdc++.h>
using namespace std;
int i,m,a[105];
int main()
{
    cin>>m;
    for(i=1;i<=m;++i)
        cin>>a[i];
    if(a[m]==0){cout <<"UP";return 0;}
	if(a[m]==15){cout << "DOWN";return 0;}
	if(m<2){cout << "-1";return 0;}
	if(a[m-1] < a[m])cout <<"UP";
	else
	cout << "DOWN";
    return 0;
}
