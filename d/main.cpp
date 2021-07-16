#include<iostream>
using namespace std;
int main()
{int x,c,v,b;char f,h;
cin>>x>>f>>c;cin>>v>>h>>b;
if((x<10||v<10)&&(c<10||b<10))
    {
if((x+v)%2!=0)
    {if((((c+b)/2)+30)>=60)
      {
         cout<<(((x+v)/2)+1)<<f<<((((c+b)/2)+30)-60);
      } else
      {         cout<<"0"<<((x+v)/2)<<f<<(((c+b)/2)+30);
      }
    }
else{
      if((((x+v)/2)<10)&&((c+b)/2))
        cout<<"0"<<((x+v)/2)<<f<<"0"<<((c+b)/2);
else if(((x+v)/2)<10)
    cout<<"0"<<((x+v)/2)<<f<<((c+b)/2);
    else if((c+b)/2)
    cout<<((x+v)/2)<<f<<"0"<<((c+b)/2);
    }}
    else
        {
         if((x+v)%2!=0)
    {if((((c+b)/2)+30)>=60)
        cout<<(((x+v)/2)+1)<<f<<((((c+b)/2)+30)-60);
        else
             cout<<((x+v)/2)<<f<<(((c+b)/2)+30);
    }
else{
     cout<<((x+v)/2)<<f<<((c+b)/2);
	}
        }
	return 0;
}
