#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Podaj n: ");
    scanf("%d",&n);
     printf("Podaj m: ");
    scanf("%d",&m);
    if(n>0 && m>0){
            int k = 0;
      for(int i=0;i<=m;i++){
          k += n;
    if(k > m)
        break;
       printf("%d \n",k);
      }


    }


}
