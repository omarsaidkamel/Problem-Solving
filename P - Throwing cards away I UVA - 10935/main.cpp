#include <bits/stdc++.h>
using namespace std;
int n,d,m;queue <int> q;
int main()
{
    while(cin>>n&&n!=0){
        for(int i=1;i<=n;i++) q.push(i);

            printf("Discarded cards:");
        for(int i=1;i<n;i++){
           printf(" %d",q.front());
            q.pop();
            m=q.front();
            q.pop();
            if(!q.empty())
              cout<<",";
              q.push(m);
        }
                printf("\nRemaining card: %d\n",q.front());
                q.pop();
    }
    return 0;
}
