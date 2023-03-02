#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 int n ;
 printf("Podaj liczbe n: ");
 scanf("%d",&n);
 if(n >0){
   int wynik = pow(n,1./2);
   printf("Czesc calkowita z pierwiastka: %d " ,wynik);
 }
 else{
    printf("Niewlasciwa wartosc");
 }


}
