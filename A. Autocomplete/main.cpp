#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s ,a[101] ,mini;int n;
    cin>>s>>n;
    int y =s.size();
    for(int i = 0 ; i < n ; i++) cin>>a[i];
    sort(a,a+n);
       for(int i=0;i<n;i++){
	    mini=a[i];
	    if(s==mini.substr(0,s.size())){
	        cout<<mini;
	        return 0;
	    }
	}
    cout<<s;
    return 0;
}
