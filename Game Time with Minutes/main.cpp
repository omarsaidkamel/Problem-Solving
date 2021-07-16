#include <iostream>
using namespace std;
int main()
{
   int ih,im,lh,lm;
   scanf("%d%d%d%d",&ih,&im,&lh,&lm);
    if(ih==lh)
    {
      if(im==lm)
      printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
      else{
      if(im<lm)
      printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",lm-im);
      else
      printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n",60-(im-lm));
      }
    }
    else if(ih>11&&lh>11||ih<12&&lh>11||ih<13&&lh<13&&lh>ih)
    {
      if(im==lm)
      printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",lh-ih);
      else{
      if(im<lm)
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",lh-ih,lm-im);
      else
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",lh-ih-1,60-(im-lm));
      }
    }
    else if(ih>11&&lh<13||ih<13&&lh<13&&lh<ih)
    {
      if(im==lm)
      printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",24-ih+lh);
      else{
      if(im<lm)
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-ih+lh,lm-im);
      else
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24-ih+lh-1,60-(im-lm));
      }
    }

   return 0;
}
