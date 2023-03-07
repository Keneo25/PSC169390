#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a;
    float h;
    float b;
    float c;
    int wyb;
    printf("Jeśli chcesz podaj podstawę oraz wysokość trójkąta wpisz 1 jezeli chcesz podaj jego wszystkie boki wpisz 2:");
    scanf("%d",&wyb);

    if(wyb ==1){
    printf("Podaj podstawe trojkata: ");
    scanf("%f",&a);
    printf("Podaj wyskokosc trojkata: ");
    scanf("%f",&h);
    printf("Wynik %.2f", (h*a)/2);
    }
    else if(wyb == 2){
        printf("Podaj 1 bok: ");
        scanf("%f",&a);
         printf("Podaj 2 bok: ");
        scanf("%f",&b);
         printf("Podaj 3 bok: ");
        scanf("%f",&c);
        printf("Wynik: %.2f",(a+b+c)/2);
    }
    else{
        printf("Podaj prawidlowa watosc");
    }
}
