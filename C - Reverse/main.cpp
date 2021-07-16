#include <bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   while(cin>>s){
   reverse(s.begin(),s.end());
   stringstream x (s);
   int h=0; x>>h;
   cout<<h<<"\n";
   }
    return 0;
}
