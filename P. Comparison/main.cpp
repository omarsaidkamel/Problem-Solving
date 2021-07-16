#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s,t1,t2,small;
   cin>>s;small=s;
   int n=s.length();
   for(int i=0;i<n-1;i++){
    t1=s.substr(0,i+1);
    t2=s.substr(i+1,n-1);
    sort(t1.begin(),t1.end());
    sort(t2.begin(),t2.end());
    if(small>t1+t2) small=t1+t2;
   }
   cout<<small;
    return 0;
}
