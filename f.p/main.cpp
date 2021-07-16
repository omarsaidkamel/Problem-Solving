#include <iostream>
#include<fstream>
#include<cstring>
#include<cstdlib>
using namespace std;
struct Student
{char name[20];
int id;
float grade;
};
int main()
{ifstream input;ofstream output;ofstream Hello_world;string g,m;int f=0,x=0;char name,sal[100],dept[30],*ptr1;int j=0,d=0,l=0;
input.open("input.txt");output.open("output.txt");Hello_world.open("Hello_world.txt");Student ptr;

input.seekg(0,ios::end);
j=input.tellg();
while(j!=l)
    {  l++;
         input.seekg(j-l);
        name=input.get();
        output.put(name);
cout<<name;
    }
/*
for(int i=0;i<2;i++)
    {  output.read((char*)&ptr,sizeof(ptr));
        cout << "\n Student Name: \n"<<ptr.name;

    cout << "\n Student ID:\n"<<ptr.id;
cout << "\n Student grade: \n"<<ptr.grade;


output.write("This is a sample",16);
x=output.tellp();
output.seekp(x-7);
output.write("n apple",7);
input.seekg(0,ios::end);
x=input.tellg();
cout<<x;
while(!input.eof())
    {
        input.getline(sal,100);
        ptr=strtok(sal," ");
        ptr=strtok(NULL," ");
        x=atoi(ptr);
        f+=x;
    }
        cout<<f;
*/
input.close();output.close();Hello_world.close();
  return 0;
}

