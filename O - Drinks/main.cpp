#include <iostream>
using namespace std;
float a,m,n;
int main(){
	scanf("%f",&n);
	for(int i=0;i<n;i++){
		scanf("%f",&m);
		a+=m;
	}
	printf("%f",a/n);
}
