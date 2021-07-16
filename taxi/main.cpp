#include<iostream>
using namespace std;
int n,i,k,g1,g2,g3,g4,x;
main(){
	cin>>n;
	for(i=0; i<n; i++){
	cin>>k;
	if(k==1) g1++;
	if(k==2) g2++;
	if(k==3) g3++;
	if(k==4) g4++;
	}
	x=g4+g3+g2/2;
	g1=g1-g3;
	if(g2%2==1) {x++; g1=g1-2;}
	if(g1>0) x=x+g1/4;
	if(g1%4>0) x++;
	cout<<x;

}
