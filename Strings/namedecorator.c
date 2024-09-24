
#include <stdio.h>
#include <string.h>

int main(void){
    char name[9] = "sawyer";
    char prefix[9] = ":)";
    char prefics[9] = "(:";
    strcat(prefix, name);
    strcat(name, prefics);
    printf("%s", prefix); printf("%s", prefics);

return 0;
}