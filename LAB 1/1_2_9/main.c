#include <stdio.h>
#include <stdlib.h>

int main()
{
   float liczba;
    scanf("%f",&liczba);
    float pierwiastek = pow(liczba,(1./2));
    if(liczba > 0){
          printf("Pierwiastek z X: %f",pierwiastek);
    }else{
         printf("Liczba jest ujemna");
    }
    return 0;
}
