#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;
printf("Podaj liczbe n: ");
scanf("%d",&n);
  if(n>2){
  int k = 1;
  if(n % 2 == 0){
  for(int i=2;i <=n;i++){
    if(i % 2 == 0){
        k *= i;
    }
  }
  printf("Wynik: %d", k);
  }
  if(n % 2 != 0){
  for(int i=2;i <=n-1;i++){
    if(i % 2 == 0){
        k *= i;
    }
  }
  printf("Wynik: %d", k);
  }


}

}
