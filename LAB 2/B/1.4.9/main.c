#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m;
    printf("Podaj liczbe n: ");
    scanf("%d",&n);
      printf("Podaj liczbe m: ");
    scanf("%d",&m);
    if(n>m){
            int k;
    for(int i=1;i<=n;i++){
        if(n%i==0 && m%i==0){
             k =i;
        }
    }
     printf("%d \n",k);
    }
    if(n<m){
        int l;
    for(int i=1;i<=m;i++){
        if(n%i==0 && m%i==0){
                l =i;
        }
    }
      printf("%d \n",l);
    }
}
