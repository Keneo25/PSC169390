#include <stdio.h>
#include <stdlib.h>

int main()
{
    float liczba;
    scanf("%f",&liczba);
    if(liczba < 0 ){
        printf("Wartosc bezwzgledna: %f", (liczba*-1));
    }
    else
    printf("Wartosc bezwzgledna: %f",liczba);
    return 0;
}
