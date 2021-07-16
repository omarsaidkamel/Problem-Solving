#include <iostream>
using namespace std;
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){string s,d="";bool f=0;
      scanf("%d",&n);cin>>s;
      for(int i=0;i<n;i++){
        if(s[i]!=s[i+1]) d.push_back(s[i]);
      }
      int m=d.size();
      for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
           if(d[i]==d[j])f=1;
        }
      }
      puts(f==1?"NO":"YES");
    }
    return 0;
}
