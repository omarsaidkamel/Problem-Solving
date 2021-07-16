#include <iostream>
#include <iomanip>
using namespace std;
double n1,n2,n3,n4,n5;
int main()
{
    cin>>n1>>n2>>n3>>n4;
    double a1 =((n1*2)+(n2*3)+(n3*4)+n4)/(1+2+3+4);
    if(a1>=7.0){
    cout<<"Media: "<<fixed<<setprecision(1)<<a1<<"\n";
    cout<<"Aluno aprovado.\n";
    }
    else if(a1<5.0){
    cout<<"Media: "<<fixed<<setprecision(1)<<a1<<"\n";
    cout<<"Aluno reprovado.\n";
    }
    else if(a1>=5.0&&a1<7.0){
    cout<<"Media: "<<fixed<<setprecision(1)<<a1<<"\n";
    cout<<"Aluno em exame.\n";
      cin>>n5;
      cout<<"Nota do exame: "<<n5<<"\n";
      double a2=(n5+a1)/2;
      if(a2>=5.0)cout<<"Aluno aprovado.\n";
      if(a2<=4.9)cout<<"Aluno reprovado.\n";
      cout<<"Media final: "<<a2<<"\n";
    }
    return 0;
}
