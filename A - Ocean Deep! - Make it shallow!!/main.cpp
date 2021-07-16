#include <iostream>
using namespace std;
#define ll long long
int main()
{
      char c;ll sum ;int n = 131071;
    while(cin>>c){
        sum = c - '0';
        while(cin>>c){
            if(c == '#') break;
            sum = sum * 2 + (c -'0') ;
            sum %= n;
        }
        if(sum % n == 0) puts("YES");
        else puts("NO");
    }
    return 0;
}
