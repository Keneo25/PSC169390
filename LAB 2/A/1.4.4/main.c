#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   printf("Podaj liczbe n: ");
   scanf("%d",&n);
   if(n > 0){
        int k = 1;
    for(int i=1;i<=n;i++){
         k *=i;
    }
    printf("Silnia wynosi: %d",k);
   }
   else{
    printf("Niewlasciwa wartosc");
   }
}
