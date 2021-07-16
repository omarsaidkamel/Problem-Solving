#include<iostream>
#include<fstream>
using namespace std;
/*class person
{private:
    int age; string name;
public:
    void getdata()
    {cout<<"name";
    cin>>name;
    cout<<"age"
    cin>>age;
    }
};*/
int main()
{
    ifstream in;ofstream out;int s=0,m=0;string n;
in.open("in.txt");out.open("out.txt");
    while(!in.eof())
        {
            in>>n>>s;
            m+=s;
        }
    cout<<m;
    /*person per;  ofstream of;of.open("of.txt",ios::binary);
   cout<<"y";char f;
   while(f=='y')
    {per.getdata();
     of.write((char*)&per,sizeof(per));
     cout<<"y";
    }

  of.close();*/
  in.close();out.close();
  return 0;
}
