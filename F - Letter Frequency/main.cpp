#include <iostream>
using namespace std;
int a[26],i,f,t,task;string s;
int main()
{
    cin>>task;
    while(task--){
          int t=0;
      while(cin>>s){
        bool A=false; int e=s.size();
              for(i=0;i<e;i++)
               if(s[i]>=65&&s[i]<=90){A=true;break;}
              if(A==false)
              {
                for(i=0;i<e;i++)
                 {
                     if(s[i]>=97&&s[i]<=122) a[s[i]-'a']++;
                     if(t<a[s[i]-'a']) t=a[s[i]-'a'];
                 }
              }
      if(s[e-1]=='.')break;
            }
             for(int f=0;f<27;f++){
                  if(a[f]==t)cout<<(char)('a'+f);
                  a[f]=0;
                }cout<<"\n";
         }
    return 0;
}
