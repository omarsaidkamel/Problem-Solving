#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n = s.size();
    if(n == 1){cout<<s<<s;return 0;}
    cout<<s;
   /* if(n%2){
        for(int i = n - 2 ; i >= 0 ; i--)cout<<s[i];
    }
    else {
    }*/
        for(int i = n - 1 ; i >= 0 ; i--)cout<<s[i];
    return 0;
}
