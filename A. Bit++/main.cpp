#include <iostream>
using namespace std;
int x,a;string s;
int main()
{
    cin>>a;
    while(a--){
    cin>>s;
    if(s=="++X"||s=="X++")x++;
    else x--;
    }
    cout<<x;
    return 0;
}
