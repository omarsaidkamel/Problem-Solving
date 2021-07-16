#include <iostream>
using namespace std;
int main()
{
    string s;bool f=0;long long int xx,sum=0;
    cin>>xx;s=to_string(xx);
    int n = s.size();
    for(int i=0,j=n-1;j>=i;i++){
        if(s[i]!=s[j]){
            f=1;
            break;
        }
            j--;
    }
    for(int i=0;i<n;i++) sum += s[i]-'0';
    if(f==0&&xx%sum==0)puts("Best mentor.");
    else if((f==0&&xx%sum!=0)||(f==1&&xx%sum==0))puts("He's good.");
    else puts("He'll be fired.");
    return 0;
}
