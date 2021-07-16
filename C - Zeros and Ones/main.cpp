#include <bits/stdc++.h>
using namespace std;
string s;int a=1,d,r,i,x,y,n,m;
int main()
{
    while(cin>>s){
        cin>>d;
        cout<<"Case "<<a++<<":\n";
      while(d--){r=1;
            cin>>x>>y;
            if(x==y){
            cout<<"Yes\n";
            continue;
            }
            m=min(x,y);n=max(x,y);
                for(i = m; i <= n; ++i){
                    if(s[i] != s[x]){r=0;
                        cout<<"No\n";
                        break;
                    }
                }
            if(r) cout<<"Yes\n";
         }
      }
    return 0;
}
