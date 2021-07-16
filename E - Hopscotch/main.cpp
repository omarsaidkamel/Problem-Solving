#include<iostream>
using namespace std;
int a,x,y;
int main()
{
	cin>>a>>x>>y;
	if(y%a==0){cout<<-1;return 0;}
		y/=a;
		if(y==0&&(x>=0&&x*2<a||x<=0&&x*2>-a))        cout<<1;
		else if(y%2==1&&(x>=0&&x*2<a||x<=0&&x*2>-a))  cout<<((y/2)*3)+2;
        else if((y!=0&&y%2==0)&&x<0&&x>-a)             cout<<(y/2)*3;
        else if((y!=0&&y%2==0)&&x>0&&x<a)               cout<<((y/2)*3)+1;
        else                                             cout<<-1;
}
