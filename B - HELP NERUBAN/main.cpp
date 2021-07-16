#include <iostream>
#include <algorithm>
using namespace std;
pair<string,pair<int,pair<int,int>>>p[100009];
bool sorted(pair<string,pair<int,pair<int,int>>>p1,pair<string,pair<int,pair<int,int>>>p2){
     if(p1.second.first>p2.second.first) return true;

       if(p1.second.first==p2.second.first){

        if(p1.second.second.first>p2.second.second.first) return true;

         if(p1.second.second.first==p2.second.second.first){

            if(p1.second.second.second<p2.second.second.second)return true;

             if(p1.second.second.second==p2.second.second.second){

               if(p1.first<p2.first)return true;
            }
        }
     }
      return false;
}
int main()
{
    int n,sm,mid,lar;string s;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>s;
        scanf("%d%d%d",&sm,&mid,&lar);
        p[i].first=s;
        p[i].second.first=sm;
        p[i].second.second.first=mid;
        p[i].second.second.second=lar;
    }
    sort(p,p+n,sorted);
    for(int i=0;i<n;i++){
        s=p[i].first;
        cout<<s<<"\n";
    }
    return 0;
}
