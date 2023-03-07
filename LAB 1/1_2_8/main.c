#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba1;
    int liczba2;
    int liczba3;
    scanf("%d",&liczba1);
    scanf("%d",&liczba2);
    scanf("%d",&liczba3);
    double srednia = liczba1+liczba2+liczba3;
    printf("Srenia: %.2f \n",srednia/3);


    return 0;
}
