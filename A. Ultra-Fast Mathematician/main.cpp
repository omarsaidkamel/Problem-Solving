#include <iostream>
using namespace std;
int main()
{
    string s,d;
    cin>>s>>d;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]!=d[i])printf("1");
        else printf("0");
    }
    return 0;
}
