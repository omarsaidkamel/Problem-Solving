#include<iostream>
using namespace std;
int main()
{
   string s;
   cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            puts("YES");return 0;
      }
    }
    puts("NO");
    return 0;
}
