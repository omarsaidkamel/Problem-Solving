#include <iostream>
using namespace std;
int main()
{
    string s,d="hello";int x=0;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]==d[x])x++;
    }
    puts(x==5?"YES":"NO");
    return 0;
}
