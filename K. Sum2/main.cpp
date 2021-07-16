#include <iostream>
using namespace std;
int main()
{
    string s;int n;long long l=0;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        l+=s[i]-'0';
    }
    cout<<l;
    return 0;
}
