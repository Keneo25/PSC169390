#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,m;
 printf("Pamietaj ze n musi byc mniejsze od m \n");
 printf("Podaj n: ");
 scanf("%d",&n);
  printf("Podaj m: ");
 scanf("%d",&m);
 if(n <m){
        int k = 0;
    for(int i=0;i<=m;i++){
        if(i>=n && i<=m){
        k += i * i;
        }
    }
    printf("Wynik: %d",k);
 }
 else{
    printf("Niewlasciwe wartosci");
 }
}
