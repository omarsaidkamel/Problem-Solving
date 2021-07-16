#include <bits/stdc++.h>
using namespace std;
stack <int> s;
queue<int>q;queue<int>veco;
int main()
{
    int n,d,a[10009],i,l=0,p=0;bool b;
    while(scanf("%d",&n)&&n!=0){
             b=false;
        for(i=0;i<n;i++) scanf("%d",&a[i]);

        for(i=0;i<n-1;i++){
            if(a[i]<a[i+1]) q.push(a[i]);
            else  s.push(a[i]);
        }
        q.push(a[i]);
        i=n;
        while(!q.empty()||!s.empty()){
            if( q.empty()|| !s.empty()&&s.top() < q.front() ){
                veco.push(s.top());
                s.pop();
            }
            else{
              veco.push(q.front());
                q.pop();
            }
        }
                while(!veco.empty())
                {
                    d=veco.front(); veco.pop();
                    //printf("%d\n",d);
                    if(!veco.empty()&&d>veco.front())
                      {
                          puts("no");
                          b=true;
                          break;
                      }
                }
      if(b==false) puts("yes");
      else while(!veco.empty()) veco.pop();
    }
    return 0;
}
/*
6
1 2 4 3 5 6
*/
