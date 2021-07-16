#include <iostream>
using namespace std;
string ss;
int d,h,m,s,d1,h1,m1,s1,v;
long long int day1,day2,total,c;
int main()
{
    cin>>ss>>d;
    cin>>h>>ss>>m>>ss>>s;
    cin>>ss>>d1;
    cin>>h1>>ss>>m1>>ss>>s1;
    day1=(d*24*60*60)+(h*60*60)+(m*60)+s;
    day2=(d1*24*60*60)+(h1*60*60)+(m1*60)+s1;
    total=day2-day1;
    while(total>=24*60*60){
        total-=(24*60*60);v++;
    }
    cout <<v<<" dia(s)"<<"\n";v=0;
    while(total>=(60*60)){
        total-=(60*60);v++;
    }
    cout <<v<< " hora(s)"<<"\n";v=0;
    while(total>=60){
        total-=60;v++;
    }
    cout <<v<< " minuto(s)"<<"\n"<<total<<" segundo(s)\n";
    return 0;
}
