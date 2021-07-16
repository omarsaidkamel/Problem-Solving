#include<iostream>
using namespace std;
int main()
{
   int n, c, f = 0, s = 1, nex,h=0;
   while(cin >> n)
   {h=n;
   for ( c = 0 ; c < n ; c++ )
   {h--;
      if ( c <= 1 )
         nex = c;
      else
      {
         nex = f + s;
         f = s;
         s = nex;
      }
     if(h!=0) cout << nex <<" ";
   else cout << nex<<endl;
   }}
   return 0;
}
 /*arr[0]=0;arr[1]=1;
    while(cin>>m){
            if(m==1){cout<<0<<" "<<1<<"\n";}
    else{
          for(int i=0;i<46;i++)
           {
              arr[n+2]=arr[n]+arr[n+1];
              n++;
              if(m==arr[i])
             {cout<<"\n";break;}
             else if(m==arr[i+1])
             {cout<<arr[i];}
             else{cout<<arr[i]<<" ";}
           }
        }
    }*/
