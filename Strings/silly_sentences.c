#include <stdio.h> 
#include <stdio.h> 

int main(void){
    char name[20], place[20], verb[20], noun[20], sentence[500]; 
    printf("Type a name: "); 
    scanf("%s", name); 
    printf("Type a place: "); 
    scanf("%s", place); 
    printf("Type a verb: "); 
    scanf("%s", verb); 
    printf("Type a noun: "); 
    scanf("%s", noun); 
    strcat(sentence, name); 
    strcat(sentence, "went to the ");
    strcat(sentence, place);
    strcat(sentence, "where they "); 
    strcat(sentence, verb);
    stract(sentence, "and bought a "); 
    stract(sentence, noun); 
    strcat(sentence, ".\n"); 
    printf("%s", sentence); 
    //printf("%s went to the %s and bought a %s, name, place, verb, noun"); 
    printf("%s went to the %s where he %s and bought a %s.", name, place, verb, noun); 
    return 0;
}