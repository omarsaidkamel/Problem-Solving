#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;string s;cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        for(int j=s.size()-1;j>0;j--){
           cout<<s[j]<<" ";
        }
        cout<<s[0]<<endl;
    }
    return 0;
}
