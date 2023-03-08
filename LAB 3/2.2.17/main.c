#include <stdio.h>
#include <stdlib.h>

int liczba = 0;
int foo(){

    liczba++;
    printf("Wywolanie: %d \n",liczba);
}


int main()
{
    foo();
    foo();
    foo();
    foo();

}
