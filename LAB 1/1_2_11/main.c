#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float liczba;
    scanf("%f",&liczba);
    liczba = round(liczba*100)/100;
    printf("Liczba: %f",liczba);
    return 0;
}
