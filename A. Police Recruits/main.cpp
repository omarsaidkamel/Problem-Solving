#include <iostream>
using namespace std;
int j,x,y,n;
int main()
{
 cin>>n;
	while(n--)
	{
		cin>>x;
		y+=x;
		if(y<0)
		{
			j++;
			y=y+1;
		}
	}
	cout<<j;
    return 0;
}
