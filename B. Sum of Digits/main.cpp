#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c=0;
	string s;
	cin>>s;
	while(s.length()>1){
        int k=0;
        for (int i = 0; i < s.length(); i++ )
        k += (s[i]-'0');
        s = to_string(k);
        c++;
	}
	cout<<c;

}
