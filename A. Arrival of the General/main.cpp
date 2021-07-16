#include <iostream>
using namespace std;
int arr[100],a,max_n,min_n,p_x,p_n;
int main()
{cin>>a;
for(int i=0;i<a;i++)
    {
        cin>>arr[i];
      if(min_n==0)
        {min_n=arr[0];}
      if(arr[i]>max_n)
        {max_n=arr[i];p_x=i;}
      if(arr[i]<=min_n)
        {min_n=arr[i];p_n=i;}
    }
   cout<<a - p_n - 1 + p_x - (p_n < p_x) << endl;
    return 0;
}
