#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1009],b[1009];
   while(1){
    scanf("%d",&n);
    if(n==0)break;
       while(1){
        bool exit = false,ch1=false,ch2=false;
         for(int i=0;i<n;i++){
          scanf("%d",&a[i]);
          b[i]=a[i];
          if(a[0]==0){exit=true; break;}
         }
         if(exit==true)break;
         sort(a,a+n);
         for(int i=0;i<n;i++){
           if(a[i]!=b[i]){
            ch1=true;break;
           }
         }
         for(int i=0;i<n;i++){
           if(a[n-i-1]!=b[i]){
            ch2=true;break;
           }
         }
         if(ch1&&ch2)puts("No");
         else puts("Yes");
       }
   }
    return 0;
}
  /*  stack <int>s;
    int n,c;
        while(1){
        scanf("%d",&n);
        if(n==0) break;
        bool exit=false;
        while(1){
                while(!s.empty()) s.pop();
                int j = 0;
            for(int i = 0; i < n; i++) {
                scanf("%d", &c);
                if(c == 0){
                    exit=true;
                    break;
                }
                while(j < n && j != c) {
                    if(!s.empty() && s.top() == c) break;
                    j++;
                    s.push(j);
                }
                if(s.top() == c) s.pop();
            }
            if(exit==true) break;
            if(s.empty()) printf("Yes\n");
            else printf("No\n");
        }
        puts("");
    }*/
