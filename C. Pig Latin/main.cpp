#include <iostream>
using namespace std;
char c;string s;int a,m;
int main()
{
    cin>>a;
    while(a--){
        while(cin>>s){
        int y=s.size();
        if(s[0]>='A'&&s[0]<='Z')m=0;
          if(m==0){
            c=s[1]-32;
            cout<<c;
            }
           else cout<<s[1];
           for(int i=2;i<y;i++) cout<<s[i];
          if(m==0){
           c=s[0]+32;
           cout<<c<<"ay ";
           m++;
          }
          else  cout<<s[0]<<"ay ";
        }
    cout<<endl;
    }
    return 0;
}
