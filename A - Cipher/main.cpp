#include <iostream>
using namespace std;
int main()
{
    int n,x=1; string s;
	cin>>n>>s;
	for(int i=0;i<n;i=i+x)
	{
		cout<<s[i];
		x++;
	}
   return 0;
}
