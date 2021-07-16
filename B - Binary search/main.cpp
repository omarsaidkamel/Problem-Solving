#include <bits/stdc++.h>
using namespace std;
int main()
{ ios_base::sync_with_stdio(false); cin.tie(NULL);
   int n,q,c,a[(int)1e5+5];
   cin>>n>>q;
   for(int i=0;i<n;i++) cin>>a[i];
   for(int i=0;i<q;i++){
    cin>>c;
    int *an=lower_bound(a,a+n,c);
     if(*an==c) cout<<an-a<<"\n";
    else cout<<-1<<"\n";
   }
    return 0;
}
