#include<iostream>
using namespace std;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]!='n' && s[i]!='a' && s[i]!='u' && s[i]!='i' &&  s[i]!='e' && s[i]!='o'){
            if(s[i+1]!='a' && s[i+1]!='u' && s[i+1]!='i' &&  s[i+1]!='e' && s[i+1]!='o')
              {
                cout<<"NO";
                return 0;
              }
        }
    }
    cout<<"YES";
    return 0;
}
