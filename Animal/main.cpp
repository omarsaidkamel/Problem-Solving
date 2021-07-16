#include <iostream>
using namespace std;
int main()
{
    string s,g,h;
    cin>>s>>g>>h;
    if(s=="vertebrado"){
      if(g=="mamifero"){
        if(h=="onivoro"){
            puts("homem");
        }
        if(h=="herbivoro"){
            puts("vaca");
        }
      }
      if(g=="ave"){
        if(h=="carnivoro"){
            puts("aguia");
        }
        if(h=="onivoro"){
            puts("pomba");
        }
      }
    }
     if(s=="invertebrado"){
      if(g=="inseto"){
        if(h=="hematofago"){
            puts("pulga");
        }
        if(h=="herbivoro"){
            puts("lagarta");
        }
      }
      if(g=="anelideo"){
        if(h=="hematofago"){
            puts("sanguessuga");
        }
        if(h=="onivoro"){
            puts("minhoca");
        }
      }
    }
    return 0;
}
