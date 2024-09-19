#include <stdio.h>
#include <string.h>

void decorate_name(char *name) {
    int length = strlen(name);
    for (int i = 0; i < length + 4; i++) {
        putchar('-');
    }
    printf("\n----%s----\n", name);
    for (int i = 0; i < length + 4; i++) {
        putchar('-');
    }
    printf("\n");
}

int main() {
    char user_name[100];
    printf("What is your name? ");
    fgets(user_name, sizeof(user_name), stdin);
    user_name[strcspn(user_name, "\n")] = '\0';
    decorate_name(user_name);
    return 0;
}