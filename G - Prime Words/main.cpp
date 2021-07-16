#include <iostream>
using namespace std;
bool isprime(int n){
  for(int i = 2 ; i * i <= n ; i++ ){
    if( n % i == 0) return false;
  }
  return true;
}
int main()
{
    string s;
    while(cin>>s){
        int n = s.size(),sum = 0;
        for(int i = 0 ; i < n ; i++ ){
            if( s[i] >= 65 && s[i] <= 90 ) sum += (s[i] - 38);
            else sum += ( s[i] - 96 );
        }
        if(isprime(sum)) puts("It is a prime word.");
        else puts("It is not a prime word.");
    }
    return 0;
}
