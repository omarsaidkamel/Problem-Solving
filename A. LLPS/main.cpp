#include <iostream>
using namespace std;
string s;int A[30];
int main()
{
    cin>>s;char mx = s[0];int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]>mx)mx=s[i];
        A[s[i]-'a']++;
    }
    int r = A[ mx - 'a'];
    for(int i=0;i<r;i++){
     cout<<mx;
    }
    return 0;
}
