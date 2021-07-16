#include <iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    if(n==2||n==3||n==5||n==7||n%2!=0&&n%3!=0&&n%5!=0&&n%7!=0)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}
