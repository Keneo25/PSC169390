#include <stdio.h>
#include <stdlib.h>

int potega(int podstawa,int wykladnik){
int wynik = 1;
for(int i=1;i <=wykladnik;i++){
    wynik *=podstawa;
}
return wynik;
}

int pierwiastek(int liczba,int stopien){
    int wynik = 0;
    for(int i = 0;i <liczba;i++){
        if(potega(i, stopien)<=liczba){
            wynik =i;
        }
    }
    return wynik;
}


int main()
{
    int n;
    int m;
    printf("Podaj liczby PAMIETAJ ze n >0 oraz m > 1: \n");
    printf("Podaj wartosc liczby: ");
    scanf("%d",&n);
    printf("Podaj wartosc potegi: ");
    scanf("%d",&m);
    if(n>0 && m>1){
    printf("Wynik: %d",pierwiastek(n,m));
    }
    else{
        printf("Niewlasciwe wartosci");
    }
}
