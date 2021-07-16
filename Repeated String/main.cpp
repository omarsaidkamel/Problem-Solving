#include <iostream>
using namespace std;
int main()
{
    long long int n;string s;
    cin>>s>>n;int y = s.size(),c=0,f=0;
    for(int i = 0; i < y; i++){
        if(s[i]=='a')c++;
    }
    long long int r = n/y,x = n % y;
    for(int i = 0; i < x; i++){
        if(s[i]=='a')f++;
    }
    cout<<(c*r)+f;
    return 0;
}
