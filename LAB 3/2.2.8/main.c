#include <stdio.h>
#include <stdlib.h>

int pierwiastek(int liczba){
    int wynik = 0;
    for(int i = 1;i <liczba;i++){
        if(i*i == liczba){
            wynik =i;
        }
    }
    return wynik;
}


int main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    printf("Wynik: %d",pierwiastek(n));


}
