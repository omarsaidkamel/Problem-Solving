#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; int n;
    cin>>n;
    getchar();
    while(n--)
    {
        getline(cin,s);
        int l=s.length();
        stack<char>q;
        if(l%2!=0) puts("No");
        else
        {
            for(int i=0; i<l; i++)
            {
                if(!q.empty()&&s[i]==')'&&q.top()=='(')q.pop();
                else if(!q.empty()&&s[i]==']'&&q.top()=='[') q.pop();
                else q.push(s[i]);
            }
            if(q.empty())
                puts("Yes");
            else
             puts("No");
        }
    }
    return 0;
}
