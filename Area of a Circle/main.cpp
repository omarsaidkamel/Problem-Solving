#include <iostream>
#include<iomanip>
using namespace std;
int main(){
const double n= 3.14159;
double r;
while(cin>>r){

cout<<fixed<<setprecision(4)<<"A="<<n*r*r<<"\n";
             }
   return 0;
}
