#include<iostream>
using namespace std;
int i,n,a[28];string s;
int main(){
  scanf("%d",&n);
  cin>>s;
  for(i=0;i<n;i++) if(s[i]<='Z') s[i]+=32;
  for(i=0;i<n;i++) a[s[i]-'a']++;
  for(i=0;i<26;i++) if(a[i]<1){puts("NO");return 0;}
  puts("YES");
  return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
set<int>se;
int n,i;char s[101];
int main()
{
    scanf("%d%s",&n,s);
    for(i=0;i<n;i++) if(s[i]<='Z') s[i]+=32;
    for(i=0;i<n;i++) se.insert(s[i]);
    if(se.size()!=26)puts("NO");
    else puts("YES");
   return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;
int i,j,m;string s;
int main()
{

    cin>>m>>s;int n=m;
    for(int p=0;p<m;p++)
    {
        if(s[p]<='Z')
          s[p]+=32;
    }
    sort(s.begin(),s.end());
    if(m<26)
     cout<<"NO";
       else if(m>=26)
      {
          for(i;i<m;i++)
                {
                    if(s[i]==s[i+1])
                        n--;
                        if(n<26)
                       {
                           cout<<"NO";
                           return 0;
                       }
                }
                cout<<"YES";
      }
    return 0;
}*/
