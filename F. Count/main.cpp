#include <iostream>
using namespace std;
int main()
{
    string s;long long sum=0;cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++) sum+=s[i]-'0';
    cout<<sum;
    return 0;
}
