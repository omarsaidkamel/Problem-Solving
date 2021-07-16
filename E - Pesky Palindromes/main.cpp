#include <iostream>
using namespace std;
string s;int a[26],u,i,j;
int main()
{
   while(cin>>s){
    int cnt=0,x=0;
    int o=s.size();x=o;x--;
    for(i=0;i<o;i++) a[s[i]-'a']++;
    for(i=0;i<=o;i++){
        if(i==x&&s[i]==s[x]){x--;i=0;}
        if(s[i]==s[x]) break;
    }
     for(j=i;j<=(i+x)/2;j++)
        {
          if(a[s[j]-'a']==2){
                cnt=cnt+a[s[j]-'a'];
                a[s[j]-'a']=a[s[j]-'a']-2;
                }
           else if(a[s[j]-'a']%2==0&&a[s[j]-'a']!=2){
            cnt++;
            a[s[j]-'a']=a[s[j]-'a']-2;
            }
        }
        for(u=0;u<26;u++){
          if(a[u]==1)
            {cnt++;a[u]--;}
        }
      cout << "The string '"<<s<<"' contains "<<cnt<<" palindromes."<< endl;
    for(i=0;i<26;i++) a[i]=0;
   }
    return 0;
}
