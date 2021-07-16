#include <iostream>
using namespace std;
int main()
{
   int t;string s;cin>>t;
    while(t--){
       bool b=false;cin>>s;
        int n=s.size();
        for(int i=0;i<n-2;i++){
    if((s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')||(s[i]=='1'&&s[i+1]=='0'&&s[i+2]=='1'))
    {cout<<"Good"<<"\n";b=true;break;}
        }
        if(b==false)cout<<"Bad"<<"\n";
    }
    return 0;
}
