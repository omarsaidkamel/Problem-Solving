#include <bits/stdc++.h>
using namespace std;
string s;stack <char>st;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(st.size()>0&&st.top()==s[i])
            st.pop();
        else
            st.push(s[i]);
    }
    int si=st.size();
   char arr[si];
   for(int i=0;i<si;i++)
   {
       arr[i]=st.top();
       st.pop();
   }
   for (int i=si-1;i>=0;i--)
   {
       cout<<arr[i];
   }
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
char c[100000];int i,a[10000];string s;
int main()
{
   cin>>s;
    int x=s.size();
    for(int i=0;i<x;i++)
        {
            c[i]=s[i];
            a[c[i]-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(a[i]%2==1){
              char o=i+97;
                cout<<o;
              }
        }
    return 0;
}*/
