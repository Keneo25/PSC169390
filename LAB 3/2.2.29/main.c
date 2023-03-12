#include <stdio.h>
#include <stdlib.h>

int nwd(int a,int b){
     if(b ==0){
       return a;
     }
     else{
         return nwd(b,a%b);
     }
}

int main()
{
   int a;
   int b;
   printf("Podaj liczbe a: ");
   scanf("%d",&a);
   printf("Podaj liczbê b: ");
   scanf("%d",&b);
  printf("Wynik: %d",nwd(a,b));

}
