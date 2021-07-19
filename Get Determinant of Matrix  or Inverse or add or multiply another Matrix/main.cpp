#include <iostream>
using namespace std;
int main()
{   char c,v;
    double det3,det2;
    int first,second,third,fourth,fifth,sixth,seventh,eigth,ninth,d ,m, a1[2][2] ,a2[2][2], a3[2][2], a4[3][3] ,a5[3][3], a6[3][3];
for(int b=0;b<10;b++){
   ask:cout << "Enter The Diagonal in the matrix(2or3)...\n";
    cin>>d;
    if(d==2)
        { cout<<"Enter The Element of array....\n";
          for(int x=0;x<2;x++)
            {for(int y=0;y<2;y++)
            { cout<<"Enter Element["<<x<<"]"<<"["<<y<<"]=";
              cin>>a1[x][y];
            }
            }
          cout<<"Do You want to Get Determinant or Inverse or add or multiply anther one(d,i,a,m)\n";
          cin>>c;
          if((c=='d')||(c=='D'))
            {
               det2=a1[0][0]*a1[1][1]- a1[0][1]*a1[1][0];
               cout<<"The Determinant of The Matrix = "<<det2<<"\n";
            }
          else if((c=='i')||(c=='I'))
            {  det2=a1[0][0]*a1[1][1]- a1[0][1]*a1[1][0];
               cout<<"The Determinant of The Matrix = "<<det2<<"\n";
                if(det2==0)
                    {  cout<<"This Matrix has no inverse( Determinant = 0 )....\n";
                        goto ask;
                    }
           else{
                  m=a1[0][0] ;a1[0][0]=a1[1][1];a1[1][1]=m;
              a1[0][1]=-a1[0][1];a1[1][0]=-a1[1][0];
              cout<<"The Element of array before the inverse....\n";
          for(int x=0;x<2;x++)
            {for(int y=0;y<2;y++)
            { cout<<"The Element["<<x<<"]"<<"["<<y<<"]=";
             cout<<a1[x][y]<<"\n";
            }
            }
                }
           }
          else if((c=='a')||(c=='A'))
          {
              cout<<"Enter The Element of Second array....\n";
              for(int x=0;x<2;x++)
               {
                for(int y=0;y<2;y++)
                { cout<<"Enter Element["<<x<<"]"<<"["<<y<<"]=";
                  cin>>a2[x][y];
                }
               }
               cout<<"The Sum of element of Two Array.....\n";
                for(int x=0;x<2;x++)
               {
                for(int y=0;y<2;y++)
                { a3[x][y]=a2[x][y]+a1[x][y];
                  cout<<"The Element["<<x<<"]"<<"["<<y<<"]="<<a3[x][y]<<"\n";
                }
               }
           }
           else if((c=='m')||(c=='M'))
            { cout<<"Enter The Element of Second array....\n";
              for(int x=0;x<2;x++)
               {
                for(int y=0;y<2;y++)
                { cout<<"Enter Element["<<x<<"]"<<"["<<y<<"]=";
                  cin>>a2[x][y];
                }
               }
                cout<<"The Multiplicative of element of Two Array.....\n";
                for(int x=0;x<2;x++)
               {
                for(int y=0;y<2;y++)
                { a3[0][0]=a1[0][0]*a2[0][0]+a1[0][1]*a2[1][0];
                  a3[0][1]=a1[0][0]*a2[0][1]+a1[0][1]*a2[1][1];
                  a3[1][0]=a1[1][0]*a2[0][0]+a1[1][1]*a2[1][0];
                  a3[1][1]=a1[1][0]*a2[0][1]+a1[1][1]*a2[1][1];
                  cout<<"The Element["<<x<<"]"<<"["<<y<<"]="<<a3[x][y]<<"\n";
                }
               }
            }

        }
        else if(d==3)
            {cout<<"Enter The Element of array....\n";
              for(int x=0;x<3;x++)
               {
                for(int y=0;y<3;y++)
                 { cout<<"Enter Element["<<x<<"]"<<"["<<y<<"]=";
                   cin>>a4[x][y];
                 }
            }
          cout<<"Do You want to Get Determinant or Inverse or add or multiply anther one(d,i,a,m)\n";
          cin>>v;
          if((v=='d')||(v=='D'))
                {
                 first=a4[0][0]*(a4[1][1]*a4[2][2]-a4[1][2]*a4[2][1]);
                 second=a4[0][1]*(a4[2][2]*a4[1][0]-a4[1][2]*a4[2][0]);
                 third=a4[0][2]*(a4[1][0]*a4[2][1]-a4[1][1]*a4[2][0]);
                 det3=first-second+third;
                  cout<<"The Determinant of The Matrix = "<<det3<<"\n";
                }
                else if((v=='i')||(v=='I'))
               {
                 first=a4[0][0]*(a4[1][1]*a4[2][2]-a4[1][2]*a4[2][1]);
                 second=a4[0][1]*(a4[2][2]*a4[1][0]-a4[1][2]*a4[2][0]);
                 third=a4[0][2]*(a4[1][0]*a4[2][1]-a4[1][1]*a4[2][0]);
                 det3=first-second+third;
                 cout<<"The Determinant of The Matrix = "<<det3<<"\n";
                 if(det3==0)
                    {     cout<<"This Matrix has no inverse( Determinant = 0 )....\n";
                   goto ask;
                   }
                else
                   {
                 first=a4[1][1]*a4[2][2]-a4[1][2]*a4[2][1];
                 second=-(a4[2][2]*a4[1][0]-a4[1][2]*a4[2][0]);
                 third=a4[1][0]*a4[2][1]-a4[1][1]*a4[2][0];
                 fourth=-(a4[0][1]*a4[2][2]-a4[0][2]*a4[2][1]);
                 fifth=a4[0][0]*a4[2][2]-a4[2][0]*a4[0][2];
                 sixth=-(a4[0][0]*a4[2][1]-a4[2][0]*a4[0][1]);
                 seventh=a4[0][1]*a4[1][2]-a4[1][1]*a4[0][2];
                 eigth=-(a4[1][2]*a4[0][0]-a4[1][0]*a4[0][2]);
                 ninth=a4[1][1]*a4[0][0]-a4[0][1]*a4[1][0];
                 a4[0][0]=first;a4[1][0]=second;a4[2][0]=third;a4[0][1]=fourth;a4[1][1]=fifth;
                 a4[2][1]=sixth;a4[0][2]=seventh;a4[1][2]=eigth;a4[2][2]=ninth;
                cout<<"The Inverse of The Matrix is....\n";
                cout<<first<<"\t"<<fourth<<"\t"<<seventh<<"\n";
                cout<<second<<"\t"<<fifth<<"\t"<<eigth<<"\t"<<1/det3<<"\n";
                cout<<third<<"\t"<<sixth<<"\t"<<ninth<<"\n";

                   }
            }

             else if((v=='a')||(v=='A'))
          {
              cout<<"Enter The Element of Second array....\n";
              for(int x=0;x<3;x++)
               {
                for(int y=0;y<3;y++)
                { cout<<"Enter Element["<<x<<"]"<<"["<<y<<"]=";
                  cin>>a5[x][y];
                }
               }
               cout<<"The Sum of element of Two Array.....\n";
                for(int x=0;x<3;x++)
               {
                for(int y=0;y<3;y++)
                { a6[x][y]=a4[x][y]+a5[x][y];
                  cout<<"The Element["<<x<<"]"<<"["<<y<<"]="<<a6[x][y]<<"\n";
                }
               }
           }
            else if((v=='m')||(v=='M'))
                {cout<<"Enter The Element of Second array....\n";
              for(int x=0;x<3;x++)
               {
                for(int y=0;y<3;y++)
                { cout<<"Enter Element["<<x<<"]"<<"["<<y<<"]=";
                  cin>>a5[x][y];
                }
               }
                cout<<"The Multiplicative of element of Two Array.....\n";
                for(int x=0;x<3;x++)
               {
                for(int y=0;y<3;y++)
                { a6[0][0]=a4[0][0]*a5[0][0]+a4[0][1]*a5[1][0]+a4[0][2]*a5[2][0];
                  a6[0][1]=a4[0][0]*a5[0][1]+a4[0][1]*a5[1][1]+a4[0][2]*a5[2][1];
                  a6[0][2]=a4[0][0]*a5[0][2]+a4[0][1]*a5[1][0]+a4[0][2]*a5[2][2];
                  a6[1][0]=a4[1][0]*a5[0][0]+a4[1][1]*a5[1][0]+a4[1][2]*a5[2][0];
                  a6[1][1]=a4[1][0]*a5[0][1]+a4[1][1]*a5[1][1]+a4[1][2]*a5[2][1];
                  a6[1][2]=a4[1][0]*a5[0][2]+a4[1][1]*a5[1][2]+a4[1][2]*a5[2][2];
                  a6[2][0]=a4[2][0]*a5[0][0]+a4[2][1]*a5[1][0]+a4[2][2]*a5[2][0];
                  a6[2][1]=a4[2][0]*a5[0][1]+a4[2][1]*a5[1][1]+a4[2][2]*a5[2][1];
                  a6[2][2]=a4[2][0]*a5[0][2]+a4[2][1]*a5[1][2]+a4[2][2]*a5[2][2];
                  cout<<"The Element["<<x<<"]"<<"["<<y<<"]="<<a6[x][y]<<"\n";
                }
               }
            }
      }else{cout<<"Enter Number Two or Three only\n";goto ask;}
      }
    return 0;
}
