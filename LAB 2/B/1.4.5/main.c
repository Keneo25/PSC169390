#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d",&n);
    if(n>0){
            int k = 0;
        for(int i=0;i <=n;i++){
            k +=i*i;

        }
         printf("Suma kwadratu: %d \n",k);
    }
    else{
        printf("Niewlasciwa wartosc");
    }


}
