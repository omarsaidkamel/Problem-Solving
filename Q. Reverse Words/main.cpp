#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s;int b=0;
    while(cin>>s){
        reverse(s.begin(),s.end());
        if(b!=0)
        cout<<" "<<s;
        else
        cout<<s;

      b++;
    }
    return 0;
}
