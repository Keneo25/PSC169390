#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int a;
  int b;
  int c;
  printf("Podaj a: ");
  scanf("%d",&a);

  printf("Podaj b: ");
  scanf("%d",&b);

  printf("Podaj c: ");
  scanf("%d",&c);

  printf("Rownanie wyglada tak: %dx^2 %dx %d", a,b,c);

  if(a == 0 ){
    printf("\n Rownanie nie jest kwadratowe");
  }
  else{
        printf("\n");
        int delta = (b*b) - 4 *a *c;
        int pierwiastek = pow(delta,(1./2));
        printf("Delta: %d \n",delta);
        printf("Prier. %d \n",pierwiastek);
  if(delta < 0){
    printf("\n Brak rozwiazania");
  }

  else if(delta == 0){
    int x1 = (b*(-1))/(2*a);
    printf("Wynik: %d \n",x1);
  }
  else if(delta > 0){
    int x2 = ((b *(-1)) + pierwiastek)/(2*a);
     int x3 = ((b *(-1)) - pierwiastek)/(2*a);
     int pom = b*(-1);
     printf("Wynik 1: %d \n",x2);
     printf("Wynik 2: %d",x3);
  }
  }

}
