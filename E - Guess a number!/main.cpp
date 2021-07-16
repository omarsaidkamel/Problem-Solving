#include <iostream>
using namespace std;
bool f;
void pp(){puts("Impossible");f=1;}
int main()
{
   int START = 2000000000,END = -2000000000,n;
   scanf("%d",&n);
   while(n--){
     int x;char c;string s;
     cin>>s>>x>>c;
     int d = s.size();
     if(c == 'Y'){
        if(d == 2){
           if(s[0]=='>'){
            if(START < x)pp();
            END = max(x,END);
           }
           else{
             if(END > x)pp();
            START = min(START,x);
           }
        }
        else{
           if(s[0]=='>'){
             if(START <= x)pp();
             END = max(END,x +  1);
           }
           else{
             if(END >= x)pp();
             START = min(START,x - 1);
           }
        }
     }
     else{
         if(d == 2){
           if(s[0]=='>'){
              if(END > x) pp();
             START = min(START,x - 1);
           }
           else {
             if(START < x) pp();
             END = max(END,x + 1);
           }
        }
        else{
           if(s[0]=='<'){
             if(START < x) pp();
             END = max(END,x);
           }
           else {
              if(END > x) pp();
             START = min(START,x);
           }
        }
     }
     if(f)break;
   }
   if(!f)cout<<START;
   return 0;
}
