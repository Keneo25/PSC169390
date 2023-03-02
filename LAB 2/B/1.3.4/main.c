#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Podaj A liczbe: ");
    scanf_s("%d", &a);
    printf("Podaj B liczbe: ");
    scanf_s("%d", &b);
    for(int i =0;i<1;i++){
  if(a<0 && b<0){
    b = b * -1;
    a = a * -1;
    if(a > b){
        printf("A jest wieksze");
        break;
    }
    else if(b > a){
        printf("B jest wieksze");
           break;
    }
    else{
        printf("Sa sobie rowne");
           break;
    }
  }
   else if (a<0){
        a = a * -1;
        if(a > b){
        printf("A jest wieksze");
           break;
    }
    else if(b > a){
        printf("B jest wieksze");
           break;
    }
    else{
        printf("Sa sobie rowne");
           break;
    }
    }
    else if (b<0){
        b = b * -1;
        if(a > b){
        printf("A jest wieksze");
           break;
    }
    else if(b > a){
        printf("B jest wieksze");
           break;
    }
    else{
        printf("Sa sobie rowne");
           break;
    }
    }
    if(a>0 && b>0){
    if(a > b){
        printf("A jest wieksze");
           break;
    }
    else if(b > a){
        printf("B jest wieksze");
           break;
    }
    else{
        printf("Sa sobie rowne");
           break;
    }
  }
    else if (a>0){
        if(a > b){
        printf("A jest wieksze");
           break;
    }
    else if(b > a){
        printf("B jest wieksze");
           break;
    }
    else{
        printf("Sa sobie rowne");
           break;
    }
    }
    else if (b>0){
        if(a > b){
        printf("A jest wieksze");
           break;
    }
    else if(b > a){
        printf("B jest wieksze");
           break;
    }
    else{
        printf("Sa sobie rowne");
           break;
    }
    }
    }
}
