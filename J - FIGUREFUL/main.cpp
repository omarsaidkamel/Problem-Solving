#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<pair<int,int>,string>ma;int n,x,y;string s;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d%d",&x,&y);cin>>s;
      ma[{x,y}]=s;
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
      scanf("%d%d",&x,&y);
      auto it = ma.find({x,y});
      if(it!=ma.end()){
         cout<<it->second<<"\n";
      }
    }
    return 0;
}
