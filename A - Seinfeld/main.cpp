#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;int k=1;
   // getchar();
    while(1){
    //getline(cin,s);
    cin>>s;
    if(s[0]=='-') break;
    int co=0;
      int n=s.length();
      stack<char> st;
	for (int i=0;i<n;i++)
	{
		if (s[i] =='{')  st.push(s[i]);
		else if (!st.empty()&&st.top()=='{')  st.pop();
		else {
			co++;
			st.push('{');
		}
	}
	  co+=st.size()/2;
      printf("%d. %d\n",k++,co);
    }
    return 0;
}
/*for(int i=0;i<n;i+=2){
        if(s[i]=='}'&&s[i+1]=='{')c+=2;
        else if(s[i]=='{'&&s[i+1]=='{'||s[i]=='}'&&s[i+1]=='}')c++;
      }*/
