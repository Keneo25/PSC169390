#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    printf("(+).1 \n(-).2\n(*).3\n(/).4 \n");
    printf(" Podaj co chcesz zrobic: ");
    scanf("%d",&c);
    float a;
    float b;
   if(c == 1){
    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe: ");
    scanf("%f",&b);
    printf("Wynik: %.1f",a+b);
   }
   else if(c == 2){
    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe: ");
    scanf("%f",&b);
    printf("Wynik: %.1f",a-b);
   }
   else if(c == 3){
    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe: ");
    scanf("%f",&b);
    printf("Wynik: %.1f",a*b);
   }
   else if(c == 4){
    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe: ");
    scanf("%f",&b);
    printf("Wynik: %.1f",a/b);
   }
   else{
    printf("Nieprawidlowa wartosc");
   }
}
