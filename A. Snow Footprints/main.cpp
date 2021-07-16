#include <iostream>
using namespace std;
string d;int n ,t ,s;bool b = true;
int main()
{
    scanf("%d",&n);cin>>d;
    while(t<n){
        if( d[t] == 'R'){
            if(b){b = false; s = t + 1; }
            d[t] = '.'; t++;
        }
        if( d[t] == 'L' ){
            if(b){b = false; s = t + 1;}
            d[t] = '.';  t--;
        }
        else if( d[t] == '.' && b )t++;
        else if( d[t] == '.' && b == false )break;
    }
    printf("%d %d\n",s,t+1);
    return 0;
}
