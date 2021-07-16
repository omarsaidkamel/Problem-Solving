#include<bits/stdc++.h>
using namespace std;
int n,k,l,c,d,p,nl,np,cc;
int main(){
    scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
  	cc=(int)((k*l)/(nl));
	cc=min(cc,c*d);
	cc=min(cc,p/np);
	printf("%d",cc/n);
    return 0;
}
