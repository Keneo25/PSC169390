#include <stdio.h>
#include <stdlib.h>
int silnia(int liczba){
    if(liczba > 0){
            int zmienna = 1;
        for(int i=1;i<=liczba;i++){
            zmienna *= i;
        }
       return zmienna;
    }
}



int main()
{
    int n;
    printf("Podaj liczbe dodatnia: ");
    scanf("%d",&n);
    for(int i=1;i <=n;i++){
        printf("%d",i);
    if(i !=n){
        printf("*");
    }
    }
    printf(" = %d",silnia(n));

}
