#include <bits/stdc++.h>
using namespace std;
string s,d;
int j,arr[30],arr1[30];
int main()
{
    cin>>s>>d;
    int o=s.size(),r=d.size();
    for(int i=0;i<o;i++) arr[s[i]-'a']++;
    for(int i=0;i<r;i++) arr1[d[i]-'a']++;
    for(int i=0;i<30;i++){
            if(arr[i]<arr1[i]){
              cout<<"NO"; return 0;
            }
    }
    cout<<"YES";
    return 0;
}
/* sort(s.begin(),s.end());
    sort(d.begin(),d.end());
    for(int i=0;i<o;i++){
        if(d[j]==s[i]){
            j++;
            if(j==r-1){cout<<"YES";return 0;}
        }
    }
    cout<<"NO";*/

