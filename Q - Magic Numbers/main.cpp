#include <iostream>
using namespace std;
bool Magic(string s){
  int n=s.length();
   for(int i=0;i<n;i++){
      if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4') i+=2;
      else if(s[i]=='1'&&s[i+1]=='4')i++;
      else if(s[i]=='1')continue;
      else return false;
   }
   return true;
}
int main()
{
     string s;
     cin>>s;
     if(Magic(s))puts("YES");
     else puts("NO");
    return 0;
}
