#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a,b,c,d;
  float x;
  printf("Podaj a: ");
  scanf("%d",&a);
  printf("Podaj b: ");
  scanf("%d",&b);
  printf("Podaj c: ");
  scanf("%d",&c);
  printf("Podaj d: ");
  scanf("%d",&d);
  //a
  if(a < 0){
    a = (a*-1);
  }
  if(c>d){
    printf("Wynnik: 0\n");
  }
  else {
    int temp =0;
    for(int i=0;a*i*i+b*i+c<=d;i++){
        temp =i;
    }
    printf("Wynik: %d\n",temp+1);
  }

  //b
  if(b<c){
    printf("Wynik: 0\n");
  }
  else{
        int temp2 = 0;
    for(int i;5*i*i+a*i+b<=c;i++){
        temp2 = i;
    }
   printf("Wynik: %d\n",temp2+1);
  }

 //c
 if(b<=c){
    printf("Wynik: 0\n");
  }
  else{
        int temp3 = 0;
    for(int i;5*i*i+a*i+b<=c;i++){
        temp3 = i;
    }
   printf("Wynik: %d\n",temp3+1);
  }


}
