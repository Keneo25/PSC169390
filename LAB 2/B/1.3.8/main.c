#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    printf("(kwadrat).1\n(prostokat).2\n(trokat).3\n");
    scanf("%d",&c);
    if(c ==1){
        int k;
        printf("Podaj bok kwadratu: ");
        scanf("%d",&k);
    printf("Pole kwadratu wynosi: %d",k*k);
    }
    else if(c ==2){
        int p;
        int o;
        printf("Podaj 1 bok: ");
        scanf("%d",&p);
         printf("Podaj 2 bok: ");
        scanf("%d",&o);
    printf("Pole prostokatu wynosi: %d",p*o);
}
 else if(c ==3){
        int f;
        int h;
        printf("Podaj bok: ");
        scanf("%d",&f);
         printf("Podaj wysokosc: ");
        scanf("%d",&h);
    printf("Pole prostokatu wynosi: %d",(f*h)/2);
}
else{
    printf("Niewlasciwa wartosc");
}

}
