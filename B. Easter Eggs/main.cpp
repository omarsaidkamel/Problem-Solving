#include <iostream>
using namespace std;
int main()
{
    int i = 3 , n ;
    string s ="ROYGBIV";
    scanf("%d",&n);
    while(n){
        if( n < 7){
            while(n != 0){
                cout<<s[i];
                if( i < 6 )i++;
                else i = 3;
                n--;
            }
        }
        else  {cout<<s;n-=7;}
    }
    return 0;
}
