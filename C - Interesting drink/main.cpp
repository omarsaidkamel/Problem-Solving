#include <bits/stdc++.h>
using namespace std;
int main()
{ios_base::sync_with_stdio(false);
cin.tie();
    int n,a[100008],q,nq[100009];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    cin>>q;
    for(int i=0;i<q;i++)   cin>>nq[i];
    for(int i=0;i<q;i++){
        int *h=upper_bound(a,a+n,nq[i]);
        cout<<h-a<<"\n";
    }
    return 0;
}
