#include <iostream>
using namespace std;
char c;string d,s="qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{
    cin>>c>>d;
    int x=s.size();int y=d.size();
    if(c=='R'){
        for(int i=0;i<y;i++){
          for(int j=0;j<x;j++){
            if(s[j]==d[i])
              cout<<s[j-1];
          }
        }
      }
    else{
        for(int i=0;i<y;i++){
          for(int j=0;j<x;j++){
            if(s[j]==d[i])
              cout<<s[j+1];
          }
        }
     }
    return 0;
}
