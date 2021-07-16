#include <iostream>
using namespace std;
int main()
{
    int sum = 0;string s;
    cin>>s;
    int n = s.size();
    for(int i = 0; i < n; i++ ) sum+=s[i]-'0';
	if(sum == 0) puts("0");
	else if(sum==1)	printf("%d",n/2);
	else printf("%d",(n+1)/2);
    return 0;
}
