#include <iostream>
using namespace std;
string s;int d,q,mx,a[(int)1e5+4];
int main()
{
    cin>>s>>d;
    for(int i=0;i<d;i++){
       scanf("%d",&q);
       a[q-1]++;
    }
     int y=s.size();
   for(int i=0; i<y/2; i++)
    {
        if(i!=0) a[i]+=a[i-1];
        if(a[i]%2==1) swap(s[i],s[y-1-i]);
    }
   /* for(int i=1;i<=mx;i++){
       if(a[i]%2==1){
           int y=s.size();
           for(int j=i-1;j*2<y;j++) swap(s[j],s[(y-j)-1]);
       }
    }*/
    cout<<s;
    return 0;
}
