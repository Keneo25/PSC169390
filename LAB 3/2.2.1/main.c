#include <stdio.h>
#include <stdlib.h>


int bez(int liczba){
    if(liczba < 0){
        return liczba*(-1);
    }
    else
    return liczba;
}


int main()
{
    int n;
    printf("Podaj liczbe: ");
    scanf("%d",&n);
    printf("Wynik: %d",bez(n));

}
