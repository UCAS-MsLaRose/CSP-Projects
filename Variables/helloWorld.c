#include <stdio.h>

int main(void){
    char favoriteColor[30]; 
    printf("What is your favorite color?: \n");
    fgets (favoriteColor,sizeof (favoriteColor),stdin); 
    printf ("Nice %s\n", favoriteColor); 
    return 0;
}