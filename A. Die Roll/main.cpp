#include <iostream>
using namespace std;
int n,t;
int main()
{

cin>>n>>t;

	switch(max(n,t)){
		case 1:cout<<"1/1";break;
		case 2:cout<<"5/6";break;
		case 3:cout<<"2/3";break;
		case 4:cout<<"1/2";break;
		case 5:cout<<"1/3";break;
		case 6:cout<<"1/6";break;
	}

	return 0;
}
