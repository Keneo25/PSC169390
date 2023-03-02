#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c,d,e,f;
printf("Podaj a: ");
scanf("%d",&a);

printf("Podaj b: ");
scanf("%d",&b);

printf("Podaj c: ");
scanf("%d",&c);

printf("Podaj d: ");
scanf("%d",&d);

printf("Podaj e: ");
scanf("%d",&e);

printf("Podaj f: ");
scanf("%d",&f);

printf("Tak wyglada rownanie \n");
 printf("%dx + %dy = %d\n", a, b, e);
 printf("%dx + %dy = %d\n", c, d, f);

int k = a * c - b * d;
float kx = e * c - b * f;
float ky = a * f - e * d;


 if (k == 0)
    {
        if (kx == 0 && ky == 0)
            printf("Rownanie ma nieskonczenie wiele rozwiazan");
        else
            printf("Rownanie nie ma rozwiazan");
        return 0;
    }
    float x = kx / k;
    float y = ky / k;
    printf("Rownanie ma jedno rozwiazanie: x = %.2f, y = %.2f", x, y);



}
