#include <iostream>
using namespace std;
char a[309][309];int n,x,m[30];bool e,o;
int main()
{
   cin>>n;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     cin>>a[i][j];
     m[a[i][j]-'a']++;
    }
   }
   for(int i=0;i<n;i++){
    if(a[n/2][n/2]!=a[i][i])e=true;
    if(a[i][i]!=a[i][n-i-1]) e=true;
     for(int j=0;j<n;j++){
      if(i!=j&&n-i-1!=j){
        if(a[0][1]!=a[i][j])
        o=true;
      }
     }
   }
   for(int i=0;i<=26;i++){
     if(m[i]!=0)x++;
   }
  if(e==true||x>2||x<2||o==true) cout<<"NO";
  else cout<<"YES";
    return 0;
}
