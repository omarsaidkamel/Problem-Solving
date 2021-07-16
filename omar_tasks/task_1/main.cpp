#include <iostream>
#include<fstream>
using namespace std;
int main()
{string ward,name,man; ofstream output_file;ifstream input_file;
input_file.open("input_file.txt");output_file.open("output_file.txt");
cout<<"Inter The Word That You Want To Write After It\n";
cin>>ward;
cout<<"What Do Want To Write\n";
cin>>man;
while(!input_file.eof())
    {
      input_file>>name;
     cout<<name<<"\n";output_file<<name;
     if(ward==name)
        {cout<<man;output_file<<man<<" ";}
    }
input_file.close();output_file.close();
    return 0;
}
