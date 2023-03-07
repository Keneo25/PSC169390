
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,k;
    printf("Podaj n: ");
    scanf("%d",&n);
     printf("Podaj m: ");
    scanf("%d",&m);
     printf("Podaj k: ");
    scanf("%d",&k);
    int l = 0;
    for(int i = 0; i <k;i++){
            l += n;
        if(l>m && l<k){
            printf("%d \n",l);
        }
    }

}
