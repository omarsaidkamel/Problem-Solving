#include<iostream>
using namespace std;
int main() {
	double d,h,v,e;
	scanf("%lf%lf%lf%lf",&d,&h,&v,&e);d/=2;
	if(v/(d*d*3.1415926)>e) printf("YES\n%f",h/(v/(d*d*3.1415926)-e));
	else printf("NO");
	return 0;
}
