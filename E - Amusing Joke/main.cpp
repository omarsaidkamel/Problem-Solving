#include <iostream>
using namespace std;
string s1,s2,s3;int x[26],y[26];
int main()
{
    cin>>s1>>s2>>s3;
    for(int i=0;i<s1.size();i++)
    x[s1[i]-'A']++;
    for(int i=0;i<s2.size();i++)
    x[s2[i]-'A']++;
    for(int i=0;i<s3.size();i++)
    y[s3[i]-'A']++;
    for(int i=0;i<26;i++)
    {
        if(x[i]!=y[i])
            {
                cout<<"NO"<<endl;
                  return 0;
            }
    }
    cout<<"YES"<<endl;
    return 0;
}
