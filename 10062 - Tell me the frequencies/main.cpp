#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>f,pair<int,int>h){
   if(f.second>h.second)return false;
   if(f.second==h.second){
    if(f.first<h.first)return false;
   }
   return true;
}
int main()
{
   char s [1005];bool l=false;
   while(gets(s)){
    pair<int,int>p[130];
    int a[130],x=0;
    fill(a,a+130,0);
    int y=strlen(s);
    for(int i=0;i<y;i++)  a[(int)s[i]]++;
    for(int i=0;i<130;i++){
        if(a[i]>0){
            p[x].first=i;
            p[x].second=a[i];x++;
        }
    }
    sort(p,p+x+1,cmp);
    if(l)printf("\n");l=true;
    for(int i=0;i<130;i++) if(p[i].second>0)  printf("%d %d\n",p[i].first,p[i].second);
   }
    return 0;
}
