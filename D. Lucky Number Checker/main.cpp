#include <iostream>
using namespace std;
int main()
{
    int n;string s;bool f=0;
    cin>>n>>s;
    if(s[n-1]!='6')printf("NO");
    else {
        for(int i=0;i<n;i++){
           if(s[i]!='6'&&s[i]!='9'&&s[i]!='3')f=1;
        }
        if(f)printf("NO");
        else printf("YES");
    }
    return 0;
}
