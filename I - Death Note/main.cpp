#include<iostream>
using namespace std;
int m,n,x,sum;
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
	cin>>x;
	sum+=x;
	cout<<sum/m<<" "<<endl;
	sum%=m;
	cout<<sum<<"\n";
    }
}
