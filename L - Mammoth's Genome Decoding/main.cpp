#include<bits/stdc++.h>
using namespace std;
int A,C,G,T,n;string s;
int main()
{
	cin >>n>>s;
	if(n%4 != 0){puts("==="); return 0;}
	for(char c:s)
	{
		if(c=='A') A++;
		if(c=='C') C++;
		if(c=='G') G++;
		if(c=='T') T++;
	}
	if(A > n/4 || C > n/4 || G > n/4 || T > n/4)
		{puts("==="); return 0;}
	for(char c:s)
	{
		if(c!= '?') printf("%c",c);
		else if(A < n/4){printf("A"); A++;}
		else if(C < n/4){printf("C"); C++;}
		else if(G < n/4){printf("G"); G++;}
		else {printf("T"); T++;}
	}
	return 0;
}
