#include<bits/stdc++.h>
using namespace std;
int n ,a[26];char c[199999];
int main()
{
    cin>>n;
   for(int i=0;i<n;i++)
        cin>>c[i];
        if(n==1)
        {cout<<"YES";return 0;}
        for(int i=0;i<n;i++)
		a[c[i]-'a']++;
        for(int i=0;i<26;i++){
		if(a[i]>=2){
			cout<<"YES";
			return 0;
		       }
		}
			cout<<"NO";
    return 0;
}

