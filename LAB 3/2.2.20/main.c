#include <stdio.h>
#include <stdlib.h>

int potega(int liczba){
    if(liczba == 0){
        return 0;
    }
    if(liczba == 1){
        return 1;
    }
    if(liczba == 2){
        return 2;
    }

    return potega(liczba-1)*liczba;

}


int main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    if(n <= -1){
        printf("Niwlasciwa wartosc");
    }
    printf("Wynik: %d",potega(n));


}
