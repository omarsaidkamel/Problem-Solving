#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<string>man,woman_child,rat,captin;
    int n;string s,d;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>s>>d;
      if(d=="captain") captin.push_back(s);
      if(d=="woman"||d=="child") woman_child.push_back(s);
      if(d=="man") man.push_back(s);
      if(d=="rat") rat.push_back(s);
    }
    for(int i=0;i<rat.size();i++)cout<<rat[i]<<"\n";
    for(int i=0;i<woman_child.size();i++)cout<<woman_child[i]<<"\n";
    for(int i=0;i<man.size();i++)cout<<man[i]<<"\n";
    for(int i=0;i<captin.size();i++)cout<<captin[i]<<"\n";
    return 0;
}
