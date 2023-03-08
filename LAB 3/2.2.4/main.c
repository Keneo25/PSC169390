#include <stdio.h>
#include <stdlib.h>


int potega(int liczba){
    if(liczba > 0){
            int zmienna = 2;
        for(int i=1;i<liczba;i++){
            zmienna *= 2;
        }
    return zmienna;
    }
}

int main()
{
    int n;
    printf("Podaj liczbe potegi: ");
    scanf("%d",&n);
    printf("Liczba 2 do potegi ");
    printf("%d",n);
    printf(" wynosi: %d",potega(n));


}
