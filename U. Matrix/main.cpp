#include <iostream>
using namespace std;
int main()
{
    int n,a[106][106],d1=0,d2=0;
    cin>>n;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         cin>>a[i][j];
       }
    }
     for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if (i == j)   d1 += a[i][j];
            if (i == n - j - 1) d2 += a[i][j];
        }
    }
    cout<<abs(d1-d2);
    return 0;
}
