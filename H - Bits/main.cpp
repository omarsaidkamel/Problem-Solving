#include <iostream>
using namespace std;
int main()
{
    long long n,l,r;
    cin>>n;
    for(int k = 0; k < n; k++){
        scanf("%lld%lld",&l,&r);
      while((l|(l+1))<=r)  l=(l)|(l+1);
		cout<<l<<"\n";
    }
    return 0;
}
