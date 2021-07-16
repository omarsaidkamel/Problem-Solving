#include <iostream>
using namespace std;
int main()
{
    int t,n;string s;
    scanf("%d",&t);
    while(t--){cin>>s;string d="";
      int n=s.size();
      d.push_back(s[0]);
      for(int i=1;i<n;i++){
        if(s[i]==s[i+1]) i++;
        d.push_back(s[i]);
      }
      cout<<d<<"\n";
    }
    return 0;
}
