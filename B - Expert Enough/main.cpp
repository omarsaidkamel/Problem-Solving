#include <iostream>
using namespace std;
int n,h,l,m,a,t,x;pair<string,pair<int,int>>p[10002];string s;
int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            cin>>s;scanf("%d%d",&l,&h);
            p[i].first = s;
            p[i].second.first = l;
            p[i].second.second = h;
        }
       scanf("%d",&x);
        for(int i=0;i<x;i++){
            scanf("%d",&a);string d;int c=0;
           for(int i=0;i<n;i++){
             if(p[i].second.first <= a && p[i].second.second >= a){
                    c++;
                if(c==2)break;
                  d = p[i].first;
             }
           }
          if(c==1)cout<<d<<"\n";
          else puts("UNDETERMINED");
        }
      if(t)puts("");
    }
    return 0;
}
