#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int m;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj m: ");
    scanf("%d",&m);
    if(n>0 && m>0){
        for(int i=0;i<m;i++){
               int t = n * i;
               printf("wynik: %d \n", t);
            }
    }
    else{
        printf("Niewlasciwa wartosc");
    }
}
