#include <bits/stdc++.h>
using namespace std;
deque<int>q;string s;int n,m;bool b=false;
stack<int>st;
int main()
{
   scanf("%d",&n);
    while(n--){
     cin>>s;
        if(s=="back"){
          if(!q.empty()){
              if(b==false){printf("%d\n",q.back());q.pop_back();}
           else{
            if(!q.empty())
            {
             printf("%d\n",q.front());
             q.pop_front();
            }
           }
          }
          else printf("No job for Ada?\n");
        }
         if(s=="front"){
           if(!q.empty())
            {
            if(b==false){
             printf("%d\n",q.front());
             q.pop_front();}
             else {
                printf("%d\n",q.back());q.pop_back();
             }
            }
           else
            printf("No job for Ada?\n");
         }

         if(s=="reverse")b=!b;

         if(s=="push_back"){
            scanf("%d",&m);
           if(b==false) q.push_back(m);
           else q.push_front(m);
         }
         if(s=="toFront"){
            scanf("%d",&m);
            if(b==false) q.push_front(m);
            else q.push_back(m);
         }
    }
    return 0;
}
